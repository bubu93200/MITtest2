///////////////////////////////////////////////////////////
// Programme de test
// Utilise la librairie libmscore
//
// Copyright(c) Bruno Donati
//
// Version 0.00
///////////////////////////////////////////////////////////

#include <QtCore>
#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <QtGlobal>
//#include <QApplication>
#include <QtGlobal>
#include <QComboBox>
#include <QFile>
//#include <QVariant>
#include <Qset>

#include <QDebug>
#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\mscore.h"


#include "MITtest2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MITtest2 w;
    w.show();
    return a.exec();
}
