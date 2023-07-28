#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FateAndLife.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FateAndLifeClass; };
QT_END_NAMESPACE

class FateAndLife : public QMainWindow
{
    Q_OBJECT

public:
    FateAndLife(QWidget *parent = nullptr);
    ~FateAndLife();

private:
    Ui::FateAndLifeClass *ui;
};
