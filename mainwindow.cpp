
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QStyle>
#include <QKeySequence>
#include <QLabel>
#include <QStatusBar>
#include <QFileInfo>

// 建立主視窗
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Image Studio");

    // 設定 QAction 圖示
    ui->actionOpen_Image->setIcon(
        style()->standardIcon(QStyle::SP_DialogOpenButton)
        );

    ui->actionSave->setIcon(
        style()->standardIcon(QStyle::SP_DialogSaveButton)
        );

    ui->actionExit->setIcon(
        style()->standardIcon(QStyle::SP_DialogCloseButton)
        );

    // 設定快捷鍵
    ui->actionOpen_Image->setShortcut(
        QKeySequence("Ctrl+O")
        );

    ui->actionSave->setShortcut(
        QKeySequence("Ctrl+S")
        );

    ui->actionExit->setShortcut(
        QKeySequence("Ctrl+Q")
        );

    // 圖片顯示區置中
    ui->labelImage->setAlignment(Qt::AlignCenter);

    // 尚未開啟圖片時禁止儲存
    ui->actionSave->setEnabled(false);

    statusBar()->showMessage("Ready");
}

// 解構函式
MainWindow::~MainWindow()
{
    delete ui;
}

// 開啟圖片
void MainWindow::on_actionOpen_Image_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        "Open Image",
        "",
        "Images (*.png *.jpg *.jpeg *.bmp)"
        );

    if (fileName.isEmpty())
        return;

    QImage image(fileName);

    if (image.isNull())
    {
        QMessageBox::warning(
            this,
            "Error",
            "無法開啟圖片"
            );
        return;
    }

    currentImage = image;

    showImage();

    ui->actionSave->setEnabled(true);

    statusBar()->showMessage("圖片開啟成功");
}

// 顯示圖片
void MainWindow::showImage()
{
    if (currentImage.isNull())
        return;

    QPixmap pixmap = QPixmap::fromImage(currentImage);

    pixmap = pixmap.scaled(
        ui->labelImage->size(),
        Qt::KeepAspectRatio,
        Qt::SmoothTransformation
        );

    ui->labelImage->setPixmap(pixmap);
}

// 儲存圖片
void MainWindow::on_actionSave_triggered()
{
    if (currentImage.isNull())
    {
        QMessageBox::warning(
            this,
            "Error",
            "請先開啟圖片"
            );
        return;
    }

    QString selectedFilter;

    QString fileName = QFileDialog::getSaveFileName(
        this,
        "Save Image",
        "image.png",
        "PNG (*.png);;JPEG (*.jpg *.jpeg);;BMP (*.bmp)",
        &selectedFilter
        );

    if (fileName.isEmpty())
        return;

    if (QFileInfo(fileName).suffix().isEmpty())
    {
        if (selectedFilter.startsWith("JPEG"))
            fileName += ".jpg";
        else if (selectedFilter.startsWith("BMP"))
            fileName += ".bmp";
        else
            fileName += ".png";
    }

    if (currentImage.save(fileName))
    {
        QMessageBox::information(
            this,
            "Save",
            "圖片儲存成功"
            );

        statusBar()->showMessage("圖片已儲存");
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            "圖片儲存失敗"
            );
    }
}

// 離開程式
void MainWindow::on_actionExit_triggered()
{
    close();
}
