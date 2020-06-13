#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGridLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mdiArea = new QMdiArea(this);
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    setCentralWidget(mdiArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAddWindow_triggered()
{
    QWidget *widget = new QWidget(mdiArea);
    QGridLayout *gridLayout = new QGridLayout(widget);
    widget->setLayout(gridLayout);
    QPushButton *p = new QPushButton(BUTTON_STR, mdiArea);
    // cria um slot programaticamente
    connect(p, SIGNAL(clicked()), this, SLOT(addSubWin()));

    gridLayout->addWidget(p);

    mdiArea->addSubWindow(widget);
    widget->setWindowTitle(MDI_TITLE1_STR);
    widget->show();
}
