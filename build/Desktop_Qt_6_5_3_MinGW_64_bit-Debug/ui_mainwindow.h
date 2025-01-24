/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Undo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Find;
    QAction *action_Help;
    QAction *action_New_2;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Quit;
    QAction *action_Open;
    QAction *action_Close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(669, 408);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName("action_Undo");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MyImages/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName("action_Cut");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MyImages/images/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon1);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MyImages/images/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon2);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName("action_Paste");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MyImages/images/edit-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon3);
        action_Find = new QAction(MainWindow);
        action_Find->setObjectName("action_Find");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MyImages/images/filefind.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Find->setIcon(icon4);
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName("action_Help");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MyImages/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Help->setIcon(icon5);
        action_New_2 = new QAction(MainWindow);
        action_New_2->setObjectName("action_New_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/MyImages/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_2->setIcon(icon6);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/MyImages/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon7);
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName("action_SaveAs");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/MyImages/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_SaveAs->setIcon(icon8);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName("action_Quit");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/MyImages/images/gtk-quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quit->setIcon(icon9);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/MyImages/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon10);
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName("action_Close");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/MyImages/images/window-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 669, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(action_New_2);
        menu_F->addAction(action_Save);
        menu_F->addAction(action_SaveAs);
        menu_F->addAction(action_Quit);
        menu_F->addAction(action_Open);
        menu_F->addAction(action_Close);
        menu_E->addAction(action_Undo);
        menu_E->addAction(action_Cut);
        menu_E->addAction(action_Copy);
        menu_E->addAction(action_Paste);
        menu_E->addAction(action_Find);
        menu_H->addAction(action_Help);
        toolBar->addAction(action_New_2);
        toolBar->addSeparator();
        toolBar->addAction(action_Copy);
        toolBar->addAction(action_Paste);
        toolBar->addAction(action_Find);
        toolBar->addSeparator();
        toolBar->addAction(action_Help);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(&Z)", nullptr));
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(&Z)", nullptr));
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&V)", nullptr));
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Find->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", nullptr));
#if QT_CONFIG(shortcut)
        action_Find->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Help->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254\350\257\264\346\230\216", nullptr));
#if QT_CONFIG(shortcut)
        action_Help->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        action_New_2->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
#if QT_CONFIG(statustip)
        action_New_2->setStatusTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_New_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
#if QT_CONFIG(shortcut)
        action_SaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", nullptr));
#if QT_CONFIG(shortcut)
        action_Close->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
