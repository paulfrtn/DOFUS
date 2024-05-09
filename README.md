# DOFUS
Projet Dofus 

Ce projet est un projet scolaire réalisé durant ma première année d'étude à l'ECE Paris. Il s'agit d'un jeu de type Dofus réalisé en C avec la bibliothèque graphique Allegro4.4.

## Installation
### Code Blocks
Si vous utilisez code blocks, vous pouvez suivre les étapes du lien suivant:
https://fercoq.bitbucket.io/allegro/#Installation

### CLion
Si vous utilisez CLion, vous pouvez suivre les étapes suivantes:

1. Allez sur le site : https://fercoq.bitbucket.io/allegro/#Installation
   2. Suivez les étapes d'installations de allegro 4.4, cependant lors de l'extraction du fichier zip, extrayez le dans le dossier bin/mingw de votre CLion, de la même manière que avec code blocks.
   3. Ouvrez CLion, allez dans File -> Settings -> Build,Execution,Deployment -> Toolchains
      ![img.png](img.png)
   ![img_1.png](img_1.png)
   4. Dans toolset, choisissez MinGW que vous avez installé avec allegro dans le dossier bin/mingw de CLion.
![img_2.png](img_2.png)
      (Dans cet exemple le chemin est C:\MinGW)
   5. Cliquez sur Apply puis OK