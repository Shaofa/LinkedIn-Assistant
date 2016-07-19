/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonImport;
    QPushButton *buttonExport;
    QPushButton *buttonSetting;
    QPushButton *buttonSynchronize;
    QPushButton *buttonFollow;
    QPushButton *buttonAdd;
    QPushButton *buttonShare;
    QPushButton *buttonLogin;
    QPushButton *buttonLogout;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabWeb;
    QVBoxLayout *verticalLayout_4;
    QProgressBar *progressBar;
    QWebView *webView;
    QWidget *tabContact;
    QVBoxLayout *verticalLayout;
    QWidget *tabMessage;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelStatusPermanentMessage;
    QLabel *labelStatusMessage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSetting;
    QMenu *menuInExport;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(886, 668);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        buttonImport = new QPushButton(centralwidget);
        buttonImport->setObjectName(QStringLiteral("buttonImport"));
        buttonImport->setMaximumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/res/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonImport->setIcon(icon);
        buttonImport->setIconSize(QSize(32, 32));
        buttonImport->setAutoDefault(false);
        buttonImport->setFlat(true);

        horizontalLayout->addWidget(buttonImport);

        buttonExport = new QPushButton(centralwidget);
        buttonExport->setObjectName(QStringLiteral("buttonExport"));
        buttonExport->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/res/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonExport->setIcon(icon1);
        buttonExport->setIconSize(QSize(32, 32));
        buttonExport->setFlat(true);

        horizontalLayout->addWidget(buttonExport);

        buttonSetting = new QPushButton(centralwidget);
        buttonSetting->setObjectName(QStringLiteral("buttonSetting"));
        buttonSetting->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/res/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSetting->setIcon(icon2);
        buttonSetting->setIconSize(QSize(32, 32));
        buttonSetting->setFlat(true);

        horizontalLayout->addWidget(buttonSetting);

        buttonSynchronize = new QPushButton(centralwidget);
        buttonSynchronize->setObjectName(QStringLiteral("buttonSynchronize"));
        buttonSynchronize->setMinimumSize(QSize(32, 32));
        buttonSynchronize->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/res/sync.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSynchronize->setIcon(icon3);
        buttonSynchronize->setIconSize(QSize(32, 32));
        buttonSynchronize->setFlat(true);

        horizontalLayout->addWidget(buttonSynchronize);

        buttonFollow = new QPushButton(centralwidget);
        buttonFollow->setObjectName(QStringLiteral("buttonFollow"));
        buttonFollow->setMinimumSize(QSize(32, 32));
        buttonFollow->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/res/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonFollow->setIcon(icon4);
        buttonFollow->setIconSize(QSize(32, 32));
        buttonFollow->setFlat(true);

        horizontalLayout->addWidget(buttonFollow);

        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));
        buttonAdd->setMinimumSize(QSize(32, 32));
        buttonAdd->setMaximumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/res/follow.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAdd->setIcon(icon5);
        buttonAdd->setIconSize(QSize(32, 32));
        buttonAdd->setFlat(true);

        horizontalLayout->addWidget(buttonAdd);

        buttonShare = new QPushButton(centralwidget);
        buttonShare->setObjectName(QStringLiteral("buttonShare"));
        buttonShare->setMinimumSize(QSize(32, 32));
        buttonShare->setMaximumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/res/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonShare->setIcon(icon6);
        buttonShare->setIconSize(QSize(32, 32));
        buttonShare->setFlat(true);

        horizontalLayout->addWidget(buttonShare);

        buttonLogin = new QPushButton(centralwidget);
        buttonLogin->setObjectName(QStringLiteral("buttonLogin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonLogin->sizePolicy().hasHeightForWidth());
        buttonLogin->setSizePolicy(sizePolicy);
        buttonLogin->setMinimumSize(QSize(25, 25));
        buttonLogin->setMaximumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/res/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLogin->setIcon(icon7);
        buttonLogin->setIconSize(QSize(32, 32));
        buttonLogin->setAutoDefault(true);
        buttonLogin->setDefault(true);
        buttonLogin->setFlat(true);

        horizontalLayout->addWidget(buttonLogin, 0, Qt::AlignRight);

        buttonLogout = new QPushButton(centralwidget);
        buttonLogout->setObjectName(QStringLiteral("buttonLogout"));
        buttonLogout->setEnabled(false);
        buttonLogout->setMinimumSize(QSize(32, 32));
        buttonLogout->setMaximumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/res/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLogout->setIcon(icon8);
        buttonLogout->setIconSize(QSize(32, 32));
        buttonLogout->setFlat(true);

        horizontalLayout->addWidget(buttonLogout);


        verticalLayout_3->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWeb = new QWidget();
        tabWeb->setObjectName(QStringLiteral("tabWeb"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWeb->sizePolicy().hasHeightForWidth());
        tabWeb->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(tabWeb);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(tabWeb);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setMaximumSize(QSize(16777215, 3));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        verticalLayout_4->addWidget(progressBar);

        webView = new QWebView(tabWeb);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_4->addWidget(webView);

        tabWidget->addTab(tabWeb, QString());
        tabContact = new QWidget();
        tabContact->setObjectName(QStringLiteral("tabContact"));
        verticalLayout = new QVBoxLayout(tabContact);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tabContact, QString());
        tabMessage = new QWidget();
        tabMessage->setObjectName(QStringLiteral("tabMessage"));
        verticalLayout_2 = new QVBoxLayout(tabMessage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget->addTab(tabMessage, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        labelStatusPermanentMessage = new QLabel(centralwidget);
        labelStatusPermanentMessage->setObjectName(QStringLiteral("labelStatusPermanentMessage"));

        verticalLayout_3->addWidget(labelStatusPermanentMessage);

        labelStatusMessage = new QLabel(centralwidget);
        labelStatusMessage->setObjectName(QStringLiteral("labelStatusMessage"));

        verticalLayout_3->addWidget(labelStatusMessage);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 886, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setTearOffEnabled(false);
        menuSetting = new QMenu(menubar);
        menuSetting->setObjectName(QStringLiteral("menuSetting"));
        menuInExport = new QMenu(menubar);
        menuInExport->setObjectName(QStringLiteral("menuInExport"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSetting->menuAction());
        menubar->addAction(menuInExport->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        buttonImport->setText(QString());
        buttonExport->setText(QString());
        buttonSetting->setText(QString());
        buttonSynchronize->setText(QString());
        buttonFollow->setText(QString());
        buttonAdd->setText(QString());
        buttonShare->setText(QString());
        buttonLogin->setText(QString());
        buttonLogout->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWeb), QApplication::translate("MainWindow", "Welcome", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabContact), QApplication::translate("MainWindow", "\350\201\224\347\263\273\344\272\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabMessage), QApplication::translate("MainWindow", "\346\266\210\346\201\257", 0));
        labelStatusPermanentMessage->setText(QApplication::translate("MainWindow", "labelStatusPermanentMessage", 0));
        labelStatusMessage->setText(QApplication::translate("MainWindow", "labelStatusMessage", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menuSetting->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        menuInExport->setTitle(QApplication::translate("MainWindow", "\345\257\274\345\205\245/\345\257\274\345\207\272", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
