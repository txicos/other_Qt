#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMdiArea>
#include "subwindowwidget.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // clicou button no tool bar
    void on_actionAddWindow_triggered();

    // cria uma janela contendo uma mensagem programaticamente
    void addSubWin() {
        SubWindowWidget *sw = new SubWindowWidget;
        mdiArea->addSubWindow(sw);
        sw->show();
    }

private:
    Ui::MainWindow *ui;
    QMdiArea * mdiArea;
};

#endif // MAINWINDOW_H
