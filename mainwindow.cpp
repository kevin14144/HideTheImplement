#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pbtnTest,SIGNAL(clicked()),this,SLOT(TestAPI()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TestAPI()
{
    //we just konw the namespace et.
    et::ThresholdValueProcess();
    et::ThresholdValueProcess(et::MYLIB);
}

void MainWindow::on_pushButton_7_clicked()
{

}
