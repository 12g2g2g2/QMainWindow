
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // 開啟圖片
    void on_actionOpen_Image_triggered();

    // 儲存圖片
    void on_actionSave_triggered();

    // 離開程式
    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;

    QImage currentImage;

    // 顯示圖片
    void showImage();
};

#endif
