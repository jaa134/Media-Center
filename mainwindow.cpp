#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QDesktopWidget>
#include <QPropertyAnimation>
#include <QAbstractAnimation>
#include <QGraphicsOpacityEffect>
#include <QSound>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete opacityEffect;
    delete logoAnimation;
    delete progressBarAnimation;
    delete sleepAnimation;
    delete backgroundAnimation;
    delete pageChangeAnimation;
    delete webViewAnimation;
    delete toolBarAnimation;
    delete webView;
    delete menuShortcut;
}

void MainWindow::HideElementsAtStart()
{
    this->setWindowFlags(Qt::CustomizeWindowHint);
    ui->toolsMenuFrame->setGeometry(1020, -75, 260, 74);
    ui->toolsMenuFrame->hide();
}

void MainWindow::HideToolsMenu()
{
    disconnect(menuShortcut, SIGNAL(activated()), this, SLOT(ToggleMenu()));

    toolBarAnimation = new QPropertyAnimation(ui->toolsMenuFrame, "geometry");
    toolBarAnimation->setDuration(200);
    toolBarAnimation->setStartValue(QRect(1020, 3, 260, 74));
    toolBarAnimation->setEndValue(QRect(1020, -75, 260, 74));
    toolBarAnimation->start();
    while (toolBarAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();
    ui->toolsMenuFrame->hide();

    connect(menuShortcut, SIGNAL(activated()), this, SLOT(ToggleMenu()));
}

void MainWindow::ShowToolsMenu()
{

    disconnect(menuShortcut, SIGNAL(activated()), this, SLOT(ToggleMenu()));

    ui->toolsMenuFrame->show();
    toolBarAnimation = new QPropertyAnimation(ui->toolsMenuFrame, "geometry");
    toolBarAnimation->setDuration(200);
    toolBarAnimation->setStartValue(QRect(1020, -75, 260, 74));
    toolBarAnimation->setEndValue(QRect(1020, 3, 260, 74));
    toolBarAnimation->start();
    while (toolBarAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

    connect(menuShortcut, SIGNAL(activated()), this, SLOT(ToggleMenu()));
}

void MainWindow::CenterWidget()
{
    QRect screenGeometry = QApplication::desktop()->availableGeometry();
    QPoint center = screenGeometry.center();
    int x = center.x() - this->width() / 2;
    int y = center.y() - this->height() / 2;
    this->move(x, y);
}

void MainWindow::IncrementProgressbar()
{
    SetupButtons();
    MakeWebView();
    for (int i = 0; i <= 84; i++)
    {
        usleep(50000);
        ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    }
}

void MainWindow::AnimateStartScreen()
{
    //QSound::play("./Audio/THX-DeepNote-48Khz.wav");

    //hack to sleep
    sleepAnimation = new QPropertyAnimation(ui->stackedWidget, "geometry");
    sleepAnimation->setDuration(4000);
    sleepAnimation->setStartValue(QRect(0, 0, 1280, 720));
    sleepAnimation->setEndValue(QRect(0, 0, 1280, 720));
    sleepAnimation->start();
    while (sleepAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

    //fade progress bar
    opacityEffect = new QGraphicsOpacityEffect();
    progressBarAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->startProgressBar->setGraphicsEffect(opacityEffect);
    progressBarAnimation->setDuration(1000);
    progressBarAnimation->setStartValue(1);
    progressBarAnimation->setEndValue(0);
    progressBarAnimation->start();
    while (progressBarAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

    //center logo
    logoAnimation = new QPropertyAnimation(ui->startLogo, "geometry");
    logoAnimation->setDuration(1500);
    logoAnimation->setStartValue(QRect(0, -20, 1280, 720));
    logoAnimation->setEndValue(QRect(0, 20, 1280, 720));
    logoAnimation->start();

    //fade background to black
    opacityEffect = new QGraphicsOpacityEffect();
    backgroundAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->startBackground->setGraphicsEffect(opacityEffect);
    backgroundAnimation->setDuration(1000);
    backgroundAnimation->setStartValue(1);
    backgroundAnimation->setEndValue(0);
    backgroundAnimation->start();
    while (backgroundAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

    //hack to sleep
    sleepAnimation = new QPropertyAnimation(ui->stackedWidget, "geometry");
    sleepAnimation->setDuration(7000);
    sleepAnimation->setStartValue(QRect(0, 0, 1280, 720));
    sleepAnimation->setEndValue(QRect(0, 0, 1280, 720));
    sleepAnimation->start();
    while (sleepAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

    //restore backgorund
    opacityEffect = new QGraphicsOpacityEffect();
    backgroundAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->startBackground->setGraphicsEffect(opacityEffect);
    backgroundAnimation->setDuration(1000);
    backgroundAnimation->setStartValue(0);
    backgroundAnimation->setEndValue(1);
    backgroundAnimation->start();

    //fade page
    opacityEffect = new QGraphicsOpacityEffect();
    pageChangeAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->startPageFrame->setGraphicsEffect(opacityEffect);
    pageChangeAnimation->setDuration(1000);
    pageChangeAnimation->setStartValue(1);
    pageChangeAnimation->setEndValue(0);
    pageChangeAnimation->start();
    while (pageChangeAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();

}

void MainWindow::TransitionToMainPage()
{
    MakeKeyboardShortcuts();

    opacityEffect = new QGraphicsOpacityEffect();
    opacityEffect->setOpacity(0);
    ui->actionsPageFrame->setGraphicsEffect(opacityEffect);

    ui->stackedWidget->setCurrentIndex(1);

    ShowToolsMenu();

    opacityEffect = new QGraphicsOpacityEffect();
    pageChangeAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->actionsPageFrame->setGraphicsEffect(opacityEffect);
    pageChangeAnimation->setDuration(1000);
    pageChangeAnimation->setStartValue(0);
    pageChangeAnimation->setEndValue(1);
    pageChangeAnimation->start();
    while (pageChangeAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();
}

void MainWindow::SetupButtons()
{
    ui->netflixBtn->setStyleSheet("background-image: url(./Images/Logos/Netflix_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->skypeBtn->setStyleSheet("background-image: url(./Images/Logos/Skype_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->twitterBtn->setStyleSheet("background-image: url(./Images/Logos/Twitter_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->youtubeBtn->setStyleSheet("background-image: url(./Images/Logos/YouTube_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->amazonBtn->setStyleSheet("background-image: url(./Images/Logos/Amazon_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->moviesBtn->setStyleSheet("background-image: url(./Images/Logos/Movies_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->spotifyBtn->setStyleSheet("background-image: url(./Images/Logos/Spotify_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->pandoraBtn->setStyleSheet("background-image: url(./Images/Logos/Pandora_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->hboNowBtn->setStyleSheet("background-image: url(./Images/Logos/HBO-Now_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->huluBtn->setStyleSheet("background-image: url(./Images/Logos/Hulu_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->espnBtn->setStyleSheet("background-image: url(./Images/Logos/ESPN_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->hboGoBtn->setStyleSheet("background-image: url(./Images/Logos/HBO-Go_small.jpg);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->homeBtn->setStyleSheet("background-image: url(./Images/Icons/home.png);"
                               "border: none;"
                               "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->wifiBtn->setStyleSheet("background-image: url(./Images/Icons/wireless.png);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->settingsBtn->setStyleSheet("background-image: url(./Images/Icons/settings.png);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
    ui->volumeBtn->setStyleSheet("background-image: url(./Images/Icons/volume.png);"
                                  "border: none;"
                                  "background-repeat: none;");
    ui->startProgressBar->setValue(ui->startProgressBar->value() + 1);
}

void MainWindow::MakeWebView()
{
    webView = new QWebView(ui->webViewPage);
    webView->setGeometry(0,0,1280,720);
    webView->lower();
}

void MainWindow::on_netflixBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Netflix_large.jpg", "http://www.netflix.com");
}

void MainWindow::on_skypeBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Skype_large.jpg", "http://www.skype.com");
}

void MainWindow::on_moviesBtn_clicked()
{

}

void MainWindow::on_amazonBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Amazon_large.jpg", "http://www.amazon.com");
}

void MainWindow::on_hboNowBtn_clicked()
{
    NavigateToWebView("./Images/Logos/HBO-Now_large.jpg", "http://order.hbonow.com");
}

void MainWindow::on_youtubeBtn_clicked()
{
    NavigateToWebView("./Images/Logos/YouTube_large.jpg", "http://www.youtube.com");
}

void MainWindow::on_pandoraBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Pandora_large.jpg", "http://www.pandora.com");
}

void MainWindow::on_twitterBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Twitter_large.jpg", "http://www.twitter.com");
}

void MainWindow::on_spotifyBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Spotify_large.jpg", "http://www.spotify.com");
}

void MainWindow::on_huluBtn_clicked()
{
    NavigateToWebView("./Images/Logos/Hulu_large.jpg", "http://www.hulu.com/welcome");
}

void MainWindow::on_hboGoBtn_clicked()
{
    NavigateToWebView("./Images/Logos/HBO-Go_large.jpg", "http://www.hbogo.com");
}

void MainWindow::on_espnBtn_clicked()
{
    NavigateToWebView("./Images/Logos/ESPN_large.jpg", "https://espn.go.com/");
}

void MainWindow::NavigateToWebView(QString logoPath, QString url)
{
    QPixmap logo (logoPath);
    ui->webViewLogo->raise();
    ui->webViewLogo->setPixmap(logo);
    opacityEffect = new QGraphicsOpacityEffect();
    webViewAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->webViewLogo->setGraphicsEffect(opacityEffect);
    webViewAnimation->setDuration(1);
    webViewAnimation->setStartValue(1);
    webViewAnimation->setEndValue(1);
    webViewAnimation->start();
    ui->stackedWidget->setCurrentIndex(2);

    webView->load(QUrl(url));
    connect(webView, SIGNAL(loadFinished(bool)), this, SLOT(StartWebViewTransition()));
}

void MainWindow::StartWebViewTransition()
{
    disconnect(webView, SIGNAL(loadFinished(bool)), this, SLOT(StartWebViewTransition()));
    opacityEffect = new QGraphicsOpacityEffect();
    webViewAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    ui->webViewLogo->setGraphicsEffect(opacityEffect);
    webViewAnimation->setDuration(1500);
    webViewAnimation->setStartValue(1);
    webViewAnimation->setEndValue(0);
    webViewAnimation->start();
    while (webViewAnimation->state() != QAbstractAnimation::Stopped)
      QCoreApplication::processEvents();
    ui->webViewLogo->lower();
}

void MainWindow::ToggleMenu()
{
    if(ui->toolsMenuFrame->isVisible())
    {
        HideToolsMenu();
    }
    else
    {
        ShowToolsMenu();
    }
}

void MainWindow::on_homeBtn_clicked()
{
    disconnect(webView, SIGNAL(loadFinished(bool)), this, SLOT(StartWebViewTransition()));
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::MakeKeyboardShortcuts()
{
    menuShortcut = new QShortcut(QKeySequence("Ctrl+M"), this);
    connect(menuShortcut, SIGNAL(activated()), this, SLOT(ToggleMenu()));
}
