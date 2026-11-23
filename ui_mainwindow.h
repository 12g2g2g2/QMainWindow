/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Image;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionRotate_Right;
    QAction *actionReset_Image;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelImage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuImage;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mainToolBar)
    {
        if (mainToolBar->objectName().isEmpty())
            mainToolBar->setObjectName("mainToolBar");
        mainToolBar->resize(800, 600);
        actionOpen_Image = new QAction(mainToolBar);
        actionOpen_Image->setObjectName("actionOpen_Image");
        actionOpen_Image->setMenuRole(QAction::MenuRole::NoRole);
        actionSave = new QAction(mainToolBar);
        actionSave->setObjectName("actionSave");
        actionSave->setMenuRole(QAction::MenuRole::NoRole);
        actionExit = new QAction(mainToolBar);
        actionExit->setObjectName("actionExit");
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        actionRotate_Right = new QAction(mainToolBar);
        actionRotate_Right->setObjectName("actionRotate_Right");
        actionRotate_Right->setMenuRole(QAction::MenuRole::NoRole);
        actionReset_Image = new QAction(mainToolBar);
        actionReset_Image->setObjectName("actionReset_Image");
        actionReset_Image->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(mainToolBar);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        labelImage = new QLabel(centralwidget);
        labelImage->setObjectName("labelImage");
        labelImage->setMinimumSize(QSize(400, 300));
        labelImage->setFrameShape(QFrame::Shape::Box);
        labelImage->setScaledContents(false);
        labelImage->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(labelImage);

        mainToolBar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainToolBar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuImage = new QMenu(menubar);
        menuImage->setObjectName("menuImage");
        mainToolBar->setMenuBar(menubar);
        statusbar = new QStatusBar(mainToolBar);
        statusbar->setObjectName("statusbar");
        mainToolBar->setStatusBar(statusbar);
        toolBar = new QToolBar(mainToolBar);
        toolBar->setObjectName("toolBar");
        mainToolBar->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuImage->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen_Image);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionReset_Image);
        menuImage->addAction(actionRotate_Right);
        toolBar->addAction(actionOpen_Image);
        toolBar->addAction(actionSave);

        retranslateUi(mainToolBar);

        QMetaObject::connectSlotsByName(mainToolBar);
    } // setupUi

    void retranslateUi(QMainWindow *mainToolBar)
    {
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main Toolbar", nullptr));
        actionOpen_Image->setText(QCoreApplication::translate("MainWindow", "Open Image", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_Image->setToolTip(QCoreApplication::translate("MainWindow", "	\351\226\213\345\225\237\345\234\226\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen_Image->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRotate_Right->setText(QCoreApplication::translate("MainWindow", "Rotate Right", nullptr));
        actionReset_Image->setText(QCoreApplication::translate("MainWindow", "Reset Image", nullptr));
        labelImage->setText(QCoreApplication::translate("MainWindow", "\345\260\232\346\234\252\351\226\213\345\225\237\345\234\226\347\211\207", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuImage->setTitle(QCoreApplication::translate("MainWindow", "Image", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
