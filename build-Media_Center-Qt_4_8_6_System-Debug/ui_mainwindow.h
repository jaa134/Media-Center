/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *startPage;
    QFrame *startPageFrame;
    QLabel *startLogo;
    QProgressBar *startProgressBar;
    QWidget *actionsPage;
    QFrame *actionsPageFrame;
    QFrame *actionButtonsFrame;
    QPushButton *twitterBtn;
    QPushButton *hboNowBtn;
    QPushButton *netflixBtn;
    QPushButton *huluBtn;
    QPushButton *hboGoBtn;
    QPushButton *skypeBtn;
    QPushButton *spotifyBtn;
    QPushButton *amazonBtn;
    QPushButton *espnBtn;
    QPushButton *pandoraBtn;
    QPushButton *youtubeBtn;
    QPushButton *moviesBtn;
    QLabel *currentTemp;
    QLabel *humidity;
    QLabel *windSpeed;
    QLabel *tempRange;
    QLabel *weatherIcon;
    QLabel *movieTL;
    QLabel *movieTR;
    QLabel *movieBL;
    QLabel *movieBR;
    QWidget *webViewPage;
    QLabel *webViewLogo;
    QLabel *startBackground;
    QLabel *blackBackground;
    QFrame *toolsMenuFrame;
    QPushButton *settingsBtn;
    QPushButton *volumeBtn;
    QPushButton *homeBtn;
    QPushButton *wifiBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(1280, 720));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(1280, 0));
        centralWidget->setMaximumSize(QSize(1280, 720));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1280, 720));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        startPage = new QWidget();
        startPage->setObjectName(QString::fromUtf8("startPage"));
        startPageFrame = new QFrame(startPage);
        startPageFrame->setObjectName(QString::fromUtf8("startPageFrame"));
        startPageFrame->setGeometry(QRect(0, 0, 1280, 720));
        startPageFrame->setStyleSheet(QString::fromUtf8("QFrame{ border: 0; }"));
        startPageFrame->setFrameShape(QFrame::StyledPanel);
        startPageFrame->setFrameShadow(QFrame::Raised);
        startLogo = new QLabel(startPageFrame);
        startLogo->setObjectName(QString::fromUtf8("startLogo"));
        startLogo->setGeometry(QRect(0, 180, 1280, 320));
        startLogo->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Logos/start_screen_logo.png")));
        startProgressBar = new QProgressBar(startPageFrame);
        startProgressBar->setObjectName(QString::fromUtf8("startProgressBar"));
        startProgressBar->setGeometry(QRect(205, 530, 871, 25));
        startProgressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #43B02A;\n"
"    width: 10px;\n"
"    margin: 1px;\n"
"	padding-left: 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-left-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"}"));
        startProgressBar->setValue(0);
        startProgressBar->setTextVisible(false);
        stackedWidget->addWidget(startPage);
        actionsPage = new QWidget();
        actionsPage->setObjectName(QString::fromUtf8("actionsPage"));
        actionsPageFrame = new QFrame(actionsPage);
        actionsPageFrame->setObjectName(QString::fromUtf8("actionsPageFrame"));
        actionsPageFrame->setGeometry(QRect(0, 0, 1280, 700));
        actionsPageFrame->setStyleSheet(QString::fromUtf8("QFrame{ border: 0; }"));
        actionsPageFrame->setFrameShape(QFrame::StyledPanel);
        actionsPageFrame->setFrameShadow(QFrame::Raised);
        actionButtonsFrame = new QFrame(actionsPageFrame);
        actionButtonsFrame->setObjectName(QString::fromUtf8("actionButtonsFrame"));
        actionButtonsFrame->setGeometry(QRect(17, 155, 792, 547));
        actionButtonsFrame->setStyleSheet(QString::fromUtf8("QFrame { border: 0; }"));
        actionButtonsFrame->setFrameShape(QFrame::StyledPanel);
        actionButtonsFrame->setFrameShadow(QFrame::Raised);
        twitterBtn = new QPushButton(actionButtonsFrame);
        twitterBtn->setObjectName(QString::fromUtf8("twitterBtn"));
        twitterBtn->setGeometry(QRect(265, 274, 263, 135));
        twitterBtn->setStyleSheet(QString::fromUtf8(""));
        hboNowBtn = new QPushButton(actionButtonsFrame);
        hboNowBtn->setObjectName(QString::fromUtf8("hboNowBtn"));
        hboNowBtn->setGeometry(QRect(265, 137, 263, 135));
        netflixBtn = new QPushButton(actionButtonsFrame);
        netflixBtn->setObjectName(QString::fromUtf8("netflixBtn"));
        netflixBtn->setGeometry(QRect(0, 0, 263, 135));
        huluBtn = new QPushButton(actionButtonsFrame);
        huluBtn->setObjectName(QString::fromUtf8("huluBtn"));
        huluBtn->setGeometry(QRect(0, 411, 263, 135));
        hboGoBtn = new QPushButton(actionButtonsFrame);
        hboGoBtn->setObjectName(QString::fromUtf8("hboGoBtn"));
        hboGoBtn->setGeometry(QRect(265, 411, 263, 135));
        skypeBtn = new QPushButton(actionButtonsFrame);
        skypeBtn->setObjectName(QString::fromUtf8("skypeBtn"));
        skypeBtn->setGeometry(QRect(265, 0, 264, 135));
        spotifyBtn = new QPushButton(actionButtonsFrame);
        spotifyBtn->setObjectName(QString::fromUtf8("spotifyBtn"));
        spotifyBtn->setGeometry(QRect(530, 274, 263, 135));
        amazonBtn = new QPushButton(actionButtonsFrame);
        amazonBtn->setObjectName(QString::fromUtf8("amazonBtn"));
        amazonBtn->setGeometry(QRect(0, 137, 264, 135));
        espnBtn = new QPushButton(actionButtonsFrame);
        espnBtn->setObjectName(QString::fromUtf8("espnBtn"));
        espnBtn->setGeometry(QRect(530, 411, 264, 135));
        pandoraBtn = new QPushButton(actionButtonsFrame);
        pandoraBtn->setObjectName(QString::fromUtf8("pandoraBtn"));
        pandoraBtn->setGeometry(QRect(0, 274, 264, 135));
        youtubeBtn = new QPushButton(actionButtonsFrame);
        youtubeBtn->setObjectName(QString::fromUtf8("youtubeBtn"));
        youtubeBtn->setGeometry(QRect(530, 137, 263, 135));
        moviesBtn = new QPushButton(actionButtonsFrame);
        moviesBtn->setObjectName(QString::fromUtf8("moviesBtn"));
        moviesBtn->setGeometry(QRect(530, 0, 263, 135));
        currentTemp = new QLabel(actionsPageFrame);
        currentTemp->setObjectName(QString::fromUtf8("currentTemp"));
        currentTemp->setGeometry(QRect(250, 0, 171, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(72);
        font.setBold(false);
        font.setWeight(50);
        currentTemp->setFont(font);
        currentTemp->setStyleSheet(QString::fromUtf8("color: white"));
        humidity = new QLabel(actionsPageFrame);
        humidity->setObjectName(QString::fromUtf8("humidity"));
        humidity->setGeometry(QRect(450, 20, 360, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(20);
        humidity->setFont(font1);
        humidity->setStyleSheet(QString::fromUtf8("color: white"));
        windSpeed = new QLabel(actionsPageFrame);
        windSpeed->setObjectName(QString::fromUtf8("windSpeed"));
        windSpeed->setGeometry(QRect(450, 60, 360, 35));
        windSpeed->setFont(font1);
        windSpeed->setStyleSheet(QString::fromUtf8("color: white"));
        tempRange = new QLabel(actionsPageFrame);
        tempRange->setObjectName(QString::fromUtf8("tempRange"));
        tempRange->setGeometry(QRect(450, 100, 360, 35));
        tempRange->setFont(font1);
        tempRange->setStyleSheet(QString::fromUtf8("color: white"));
        weatherIcon = new QLabel(actionsPageFrame);
        weatherIcon->setObjectName(QString::fromUtf8("weatherIcon"));
        weatherIcon->setGeometry(QRect(75, 5, 140, 140));
        weatherIcon->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Icons/scattered_rain.png")));
        movieTL = new QLabel(actionsPageFrame);
        movieTL->setObjectName(QString::fromUtf8("movieTL"));
        movieTL->setGeometry(QRect(820, 80, 218, 308));
        movieTL->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Movies/dark_knight_rises.png")));
        movieTR = new QLabel(actionsPageFrame);
        movieTR->setObjectName(QString::fromUtf8("movieTR"));
        movieTR->setGeometry(QRect(1042, 80, 218, 308));
        movieTR->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Movies/deadpool.png")));
        movieBL = new QLabel(actionsPageFrame);
        movieBL->setObjectName(QString::fromUtf8("movieBL"));
        movieBL->setGeometry(QRect(820, 392, 218, 308));
        movieBL->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Movies/jaws.png")));
        movieBR = new QLabel(actionsPageFrame);
        movieBR->setObjectName(QString::fromUtf8("movieBR"));
        movieBR->setGeometry(QRect(1042, 392, 218, 308));
        movieBR->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Movies/star_wars.png")));
        stackedWidget->addWidget(actionsPage);
        webViewPage = new QWidget();
        webViewPage->setObjectName(QString::fromUtf8("webViewPage"));
        webViewLogo = new QLabel(webViewPage);
        webViewLogo->setObjectName(QString::fromUtf8("webViewLogo"));
        webViewLogo->setGeometry(QRect(0, 0, 1280, 720));
        stackedWidget->addWidget(webViewPage);
        startBackground = new QLabel(centralWidget);
        startBackground->setObjectName(QString::fromUtf8("startBackground"));
        startBackground->setGeometry(QRect(0, 0, 1280, 720));
        startBackground->setPixmap(QPixmap(QString::fromUtf8("../build-Media_Center-Qt_4_8_6_System-Debug/Images/Backgrounds/background_1.png")));
        blackBackground = new QLabel(centralWidget);
        blackBackground->setObjectName(QString::fromUtf8("blackBackground"));
        blackBackground->setGeometry(QRect(0, 0, 1280, 720));
        blackBackground->setStyleSheet(QString::fromUtf8("background-color:black;"));
        toolsMenuFrame = new QFrame(centralWidget);
        toolsMenuFrame->setObjectName(QString::fromUtf8("toolsMenuFrame"));
        toolsMenuFrame->setGeometry(QRect(1020, 3, 260, 74));
        toolsMenuFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border:0;s\n"
"}"));
        toolsMenuFrame->setFrameShape(QFrame::StyledPanel);
        toolsMenuFrame->setFrameShadow(QFrame::Raised);
        settingsBtn = new QPushButton(toolsMenuFrame);
        settingsBtn->setObjectName(QString::fromUtf8("settingsBtn"));
        settingsBtn->setGeometry(QRect(195, 5, 65, 65));
        volumeBtn = new QPushButton(toolsMenuFrame);
        volumeBtn->setObjectName(QString::fromUtf8("volumeBtn"));
        volumeBtn->setGeometry(QRect(130, 5, 65, 65));
        homeBtn = new QPushButton(toolsMenuFrame);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setGeometry(QRect(0, 5, 65, 65));
        wifiBtn = new QPushButton(toolsMenuFrame);
        wifiBtn->setObjectName(QString::fromUtf8("wifiBtn"));
        wifiBtn->setGeometry(QRect(65, 5, 65, 65));
        MainWindow->setCentralWidget(centralWidget);
        blackBackground->raise();
        startBackground->raise();
        stackedWidget->raise();
        toolsMenuFrame->raise();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        startLogo->setText(QString());
        twitterBtn->setText(QString());
        hboNowBtn->setText(QString());
        netflixBtn->setText(QString());
        huluBtn->setText(QString());
        hboGoBtn->setText(QString());
        skypeBtn->setText(QString());
        spotifyBtn->setText(QString());
        amazonBtn->setText(QString());
        espnBtn->setText(QString());
        pandoraBtn->setText(QString());
        youtubeBtn->setText(QString());
        moviesBtn->setText(QString());
        currentTemp->setText(QApplication::translate("MainWindow", "76\302\260", 0, QApplication::UnicodeUTF8));
        humidity->setText(QApplication::translate("MainWindow", "Humidity: 63%", 0, QApplication::UnicodeUTF8));
        windSpeed->setText(QApplication::translate("MainWindow", "Wind Speed: 15 mph NE", 0, QApplication::UnicodeUTF8));
        tempRange->setText(QApplication::translate("MainWindow", "High / Low: 89\302\260  61\302\260", 0, QApplication::UnicodeUTF8));
        weatherIcon->setText(QString());
        movieTL->setText(QString());
        movieTR->setText(QString());
        movieBL->setText(QString());
        movieBR->setText(QString());
        webViewLogo->setText(QString());
        startBackground->setText(QString());
        blackBackground->setText(QString());
        settingsBtn->setText(QString());
        volumeBtn->setText(QString());
        homeBtn->setText(QString());
        wifiBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
