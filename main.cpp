///////////////////////////////////////////////////////////
// Programme de test
// Utilise la librairie libmscore
//
// Copyright(c) Bruno Donati
//
// Version 0.01 : Affiche la version de l'API MuseScore
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
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>


#include <QDebug>
#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\mscore.h"
//#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\score.h"

#include <iostream>
#include <string>

#include "MITtest2.h" 
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

    // Afficher la version de la librairie Musescore
    int version = Ms::MSCVERSION;

    //// Cr�er un objet Score
    //Ms::Score score;
    //
    //// Charger une partition � partir d'un fichier MusicXML
    //if (!score.load("/chemin/vers/ma/partition.xml"))
    //{
    //    std::cerr << "Erreur lors du chargement de la partition" << std::endl;
    //    return 1;
    //}

    //// Parcourir les mesures de la partition
    //for (Ms::Measure* measure : score.measures())
    //{
    //    // Parcourir les �l�ments de chaque mesure
    //    for (Ms::Element* element : measure->elements())
    //    {
    //        // V�rifier si l'�l�ment est une note
    //        if (element->isNote())
    //        {
    //            // Convertir l'�l�ment en note
    //            Ms::Note* note = static_cast<Ms::Note*>(element);

    //            // Faire quelque chose avec la note
    //            std::cout << "Note : " << note->pitch() << std::endl;
    //        }
    //    }
    //}

   

    
    QApplication app(argc, argv);

    QWidget window;
    window.setMinimumSize(500, 300);
    window.setWindowTitle("Music Instrument Training (MIT) Test");

    // Cr�er des zones de texte et d'entr�e
    QLabel* textLabel01 = new QLabel("Copyright (c) Bruno DONATI 2023");
    int myInt = version;
    QString myString = QString::number(myInt); // Qtring pour les chaines de caractere pour Qt
    QLabel* textLabel02 = new QLabel("Version de MuseScore: " + myString);
    QLineEdit* lineEdit = new QLineEdit();

    // Ajouter les zones de texte et d'entr�e � la fen�tre
    QVBoxLayout* layout = new QVBoxLayout(&window);
    layout->addWidget(textLabel01);
    layout->addWidget(textLabel02);
    layout->addWidget(lineEdit);

    // Afficher la fen�tre
    window.show();

    // Ex�cuter l'application
    return app.exec();

    ////////////////////////////////////////////
    // Permet d'utiliser la fenetre ui qui permet une programmation graphique
   //MITtest2 w;
    //w.show();
    //return a.exec();
}