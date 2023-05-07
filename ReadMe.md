# Compilation de la librairie MuseScore  
Pour que cela fonctionne il a fallu modifier le fichier style.h du github MuseScore    

Tout d'abord il faut compiler MuseScore pour obtenir une version executable en mode debug depuis Visual Studio  

# Modification de style.h  
Dans Github Musescore, il faut modifier style.h qui est dans le répertoire libmscore sinon, il reste 3 erreurs de compilation que l'on n'arrive pas à supprimer  

Les 3 lignes suivantes sont à passer en commentaire :    
ligne 1449: //std::array<QVariant, int(Sid::STYLES)> _values;  
ligne 1450: //std::array<qreal, int(Sid::STYLES)> _precomputedValues;  
Ligne 1461: //qreal pvalue(Sid idx) const { return _precomputedValues[int(idx)]; }   

# Options à mettre dans Visual Studio   
Il est possible que certaines options soient redondantes ou inutiles.  
Dans la page propriété associée au projet MITtest :

## Propriétés de Configuration
### Répertoires VC++  
#### Répertoires Include  
C:\MUSESCORE\MuseScore362GITHUB\thirdparty  
C:\MUSESCORE\MuseScore362GITHUB\libmscore  

#### Répertoires de bibliothèques
C:\MUSESCORE\MuseScore362GITHUB\thirdparty   

### Qt Project Settings
#### Qt Installation 
5.15.2_msvc2019_64  

#### Qt Modules
Core  

### C/C++
#### Général
##### Autres répertoires include
A mettre dans l'ordre suivant :  
C:\Qt\5.15.2\msvc2019_64\include\QtCore\QtGlobal  
C:\MUSESCORE\MuseScore362GITHUB\msvc.build_x64\libmscore   
C:\MUSESCORE\MuseScore362GITHUB\libmscore   
C:\MUSESCORE\MuseScore362GITHUB\msvc.build_x64\libmscore\libmscore_autogen\include_RelWithDebInfo  
C:\Qt\5.15.2\msvc2019_64\include\QtTest  
C:\Qt\5.15.2\msvc2019_64\include\QtQuickControls2   
C:\Qt\5.15.2\msvc2019_64\include\QtQuickTemplates2   
C:\Qt\5.15.2\msvc2019_64\include\QtQuickWidgets   
C:\Qt\5.15.2\msvc2019_64\include\QtWidgets   
C:\Qt\5.15.2\msvc2019_64\include\QtXml  
C:\Qt\5.15.2\msvc2019_64\include\QtXmlPatterns   
C:\Qt\5.15.2\msvc2019_64\include\QtSvg   
C:\Qt\5.15.2\msvc2019_64\include\QtSql  
C:\Qt\5.15.2\msvc2019_64\include\QtPrintSupport  
C:\Qt\5.15.2\msvc2019_64\include\QtConcurrent  
C:\Qt\5.15.2\msvc2019_64\include\QtOpenGL  
C:\Qt\5.15.2\msvc2019_64\include\QtHelp  
C:\Qt\5.15.2\msvc2019_64\include\QtWebEngine  
C:\Qt\5.15.2\msvc2019_64\include\QtWebEngineCore  
C:\Qt\5.15.2\msvc2019_64\include\QtWebChannel  
C:\Qt\5.15.2\msvc2019_64\include\QtPositioning  
C:\Qt\5.15.2\msvc2019_64\include\QtWebEngineWidgets  
C:\Qt\5.15.2\msvc2019_64\include\QtWinExtras  
C:\MUSESCORE\MuseScore362GITHUB  
C:\MUSESCORE\MuseScore362GITHUB\msvc.build_x64  
C:\Program Files (x86)\Jack\includes  
C:\MUSESCORE\MuseScore362GITHUB\dependencies  
C:\MUSESCORE\MuseScore362GITHUB\dependencies\include  
C:\MUSESCORE\MuseScore362GITHUB\dependencies\include\vorbis  
C:\MUSESCORE\MuseScore362GITHUB\dependencies\include\ogg   
C:\MUSESCORE\MuseScore362GITHUB\thirdparty\freetype\include   
C:\MUSESCORE\MuseScore362GITHUB\thirdparty\dtl  
C:\MUSESCORE\MuseScore362GITHUB\global  
%(AdditionalIncludeDirectories)  

### Editeur de liens
#### Général
##### répertoires de bibliothèques supplémentaires
C:\Qt\5.15.2\msvc2019_64\lib  
C:\MUSESCORE\MuseScore362GITHUB\msvc.build_x64\libmscore\RelWithDebInfo  

#### Entrée
##### Dépendances supplémentaires
A mettre dans cet ordre :  
Qt5Core.lib  
Qt5Quick.lib  
Qt5Gui.lib  
Qt5Widgets.lib  
libmscore.lib  
%(AdditionalDependencies)  

# Dans le programme Cpp, il faut rajouter :  
```cpp
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
```
