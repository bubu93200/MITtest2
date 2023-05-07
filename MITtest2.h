#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MITtest2.h"

class MITtest2 : public QMainWindow
{
    Q_OBJECT

public:
    MITtest2(QWidget *parent = nullptr);
    ~MITtest2();

private:
    Ui::MITtest2Class ui;
};
