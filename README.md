# Prise en main

## Description
Le but de ce travail est de vous familiariser avec les outils
de développement.

## Marche à suivre

Cloner le répertoire depuis GitHub sur votre ordinateur.

Ouvrez le projet dans VS Code.

Compiler le projet avec la commande `make`

## Debug

- Ajouter un `logpoint` à la ligne `18` dans la boucle `for` pour afficher 
la valeur de la variable `mean`

- Pour lancer le debug utiliser `F5`

- Les infos de debug sont affichés dans la fenêtre `Debug console`. C'est
au même endroit que le `terminal`

- Placer un `breakpoint` à la ligne `14` sur l'appelle de la fonction.

- Essayez les deux possibilités de pas par pas. Le premier va exécuter 
le code de la fonction sans aller à l'intérieur, et avec le deuxième vous allez
pouvoir exécuter le code de la fonction en pas par pas.

- Placer un `breakpoint` sur la ligne `11` et un sur
la ligne `22`.
- Éditer le deuxième pour que le programme s'arrête 
lorsque `i` est égal à `653`
- Exécuter votre programme en débug.
- Votre programme doit s'arrêter sur le premier `breakpoint`. 
- Cliquer sur la flèche bleue à gauche pour 
continuer le programme. Votre programme doit 
s'arrêter sur le deuxième `breakpoint`.
- Lorsque le programme est arrêté dans la boucle `for`
, ajouter ces expressions dans les `watch` pour
visualiser les valeurs :
`(i+3)%size` et `tab[(i+3)%size]`.
Ce système vous permet d'évaluer une partie du
code pour le débug.

## Git

- Ajouter un commentaire au début du fichier `main.c`
avec votre nom
- Faite un nouveau commit avec la modification
- Supprimer la boucle `for` à la ligne `21`
- Aller dans le menu `Suivit de version` et cliquer
sur le fichier `main.c`.
- Cliquer maintenant sur la flèche pour annuler les changements.
- Voici comment vous devez faire si vous voulez revenir 
à l'état de votre ancien commit.
- Créer un fichier `test.c`
- Ajouter ce fichier au stage et faite un nouveau commit.
- Pousser vos changements sur GitHub.
- Aller contrôler sur GitHub que vos deux commits sont
présent.
  - Vous devez voir le fichier `main.c` modifié
  - Vous devez voir le fichier `test.c`