///////////////////////////////////////////////////////////
// Programme de test
// Utilise la librairie libmscore
//
// Copyright(c) Bruno Donati
//
// Version 0.02 :   Affiche la version de l'API MuseScore
//                  Plus aucune erreur dans libmscore. Tous les include et librairies Qt sont corrects
///////////////////////////////////////////////////////////

#include <QtCore>
#include <QGuiApplication>
#include <QWidget>
//#include <QQmlApplicationEngine>
//#include <QApplication>
#include <QtGlobal>
#include <QComboBox>
#include <QFile>
#include <QVariant>
#include <Qset>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPainter>
#include <QPainterPath>
#include <QPrinter>
#include <QDebug>
#include <QMainWindow>
#include <QFileDialog>
#include <QAction>
#include <QNetworkReply>
#include <QSplitter>
#include <QProgressBar>
#include <QHelpEngine>
#include <QMessageBox>
#include <QString>
#include <QVector>
#include <QSvgRenderer>
#include <QByteArray>
#include <QImage>
#include <QMetaType>
#include <QStyleFactory>
#include <QStandardPaths>
#include <QDir>

#include <iostream>
#include <string>
#include <array>
#include <set>
#include <vector>
#include <deque>



#include "C:\\MUSESCORE\\MuseScore362GITHUB\\mscore\\musescore.h"
//#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\image.h"
#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\mscore.h"
//#include "C:\\MUSESCORE\\MuseScore362GITHUB\\libmscore\\score.h"




#include "MITtest2.h" 
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{

    // Afficher la version de la librairie Musescore
    int version = Ms::MSCVERSION;

    auto style = Ms::MScore::readDefaultStyle("essai");
    //Ms::Score score;
    //Ms::Score score{};
    //// Créer un objet Score
    //Ms::Score score;
    //
    //// Charger une partition à partir d'un fichier MusicXML
    //if (!score.load("/chemin/vers/ma/partition.xml"))
    //{
    //    std::cerr << "Erreur lors du chargement de la partition" << std::endl;
    //    return 1;
    //}

    //// Parcourir les mesures de la partition
    //for (Ms::Measure* measure : score.measures())
    //{
    //    // Parcourir les éléments de chaque mesure
    //    for (Ms::Element* element : measure->elements())
    //    {
    //        // Vérifier si l'élément est une note
    //        if (element->isNote())
    //        {
    //            // Convertir l'élément en note
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

    // Définiton de symboles
    const QString ALPHA = QChar(0x03B1); // unused
    const QString THETA = QChar(0x03B8); // unused
    const QString COPYRIGHT = QChar(0x00A9);
   

    // Créer des zones de texte et d'entrée
    QLabel* textLabel01 = new QLabel("Copyright " + COPYRIGHT + " Bruno DONATI 2023");
    int myInt = version;
    QString myString = QString::number(myInt); // Qtring pour les chaines de caractere pour Qt
    QLabel* textLabel02 = new QLabel("Version de MuseScore: " + myString);
    QLineEdit* lineEdit = new QLineEdit();

    // Ajouter les zones de texte et d'entrée à la fenêtre
    QVBoxLayout* layout = new QVBoxLayout(&window);
    layout->addWidget(textLabel01);
    layout->addWidget(textLabel02);
    layout->addWidget(lineEdit);

    // Afficher la fenêtre
    window.show();

    // Exécuter l'application
    return app.exec();

    ////////////////////////////////////////////
    // Permet d'utiliser la fenetre ui qui permet une programmation graphique
   //MITtest2 w;
    //w.show();
    //return a.exec();
}