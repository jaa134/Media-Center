#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QProgressBar>
#include <QWebView>
#include <QShortcut>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void HideTitleBar();
    void CenterWidget();
    void IncrementProgressbar();
    void AnimateStartScreen();
    void TransitionToMainPage();
    void HideElementsAtStart();

private slots:
    void on_netflixBtn_clicked();
    void on_skypeBtn_clicked();
    void on_moviesBtn_clicked();
    void on_amazonBtn_clicked();
    void on_hboNowBtn_clicked();
    void on_youtubeBtn_clicked();
    void on_pandoraBtn_clicked();
    void on_twitterBtn_clicked();
    void on_spotifyBtn_clicked();
    void on_huluBtn_clicked();
    void on_hboGoBtn_clicked();
    void on_espnBtn_clicked();
    void on_homeBtn_clicked();
    void StartWebViewTransition();
    void ToggleMenu();

private:
    Ui::MainWindow *ui;
    QGraphicsOpacityEffect *opacityEffect;
    QPropertyAnimation *logoAnimation;
    QPropertyAnimation *sleepAnimation;
    QPropertyAnimation *progressBarAnimation;
    QPropertyAnimation *backgroundAnimation;
    QPropertyAnimation *pageChangeAnimation;
    QPropertyAnimation *webViewAnimation;
    QPropertyAnimation *toolBarAnimation;
    QWebView *webView;
    QShortcut *menuShortcut;

    void NavigateToWebView(QString, QString);
    void MakeKeyboardShortcuts();
    void MakeWebView();
    void SetupButtons();
    void HideToolsMenu();
    void ShowToolsMenu();
};

#endif // MAINWINDOW_H
