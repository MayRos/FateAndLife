#include "FateAndLife.h"

FateAndLife::FateAndLife(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FateAndLifeClass())
{
    ui->setupUi(this);

}

FateAndLife::~FateAndLife()
{
    delete ui;
}
