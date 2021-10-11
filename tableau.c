//
// Created by User on 06/10/2021.
//

#include "tableau.h"
#include <stdio.h>

int remplirTableau() //fonction qui construit un tableau plus petit que 100 cases, ensuite on rentre les valeurs dans chaque case du tableau puis on cherche le plus grand entier parmis tous
{
    int i = 0, nbElement = 0, monTableau[NB_ELEM_MAX], nbPlusGrand = 0;
    printf("Saisissez le nombre d'entier a inserer dans le tableau :\n");
    scanf("%d", &nbElement);
    if(nbElement > NB_ELEM_MAX) //On verifie si le nombre d'entier a inserer est plus petit que ceux que le tableau peut en mettre
    {
        printf("Le nombre d'entier a inserer est trop grand par rapport au nombre de places, rentrez a nouveau le nombre d'element en respectant la taille max :\n");
        scanf("%d", &nbElement);
    }
    else
    {
        for(i=0; i < nbElement; i++) //On entre tous les entiers dans chaque case different du tableau
        {
            printf("Rentrez l'entier que vous voulez dans le tableau :\n");
            scanf("%d", &monTableau[i]);
        }
    }
    afficherTableau(monTableau, nbElement);
    nbPlusGrand = monTableau[0];
    for(i=1; i < nbElement; i++)
    {
        if(nbPlusGrand<monTableau[i]) //On teste si les cases sont plus grands les unes les autres
        {
            nbPlusGrand = monTableau[i];
        }
    }
    printf("le nombre le plus grand dans le tableau est : %d\n", nbPlusGrand);
    return 0;
}

void afficherTableau(int tableau[], int taille) //Une fonction qui montre a quoi ressemble l tableau, IN: un tableau et sa taille, OUT : affiche le tableau
{
    int a = 0;
    printf("Le tableau contient %d elements : \n", taille);
    for (a = 0; a < taille; a++) {
        printf("%d \n", tableau[a]);
    }
}

void remplirTableau2D(int tableau[LIGNE][COLONNE])
{
    int i = 0, j = 0;
    for(i=0; i<LIGNE; i++)
    {
        for(j=0; j<COLONNE; j++)
        {
            printf("Entrez l'entier pour la case (%d,%d) : \n", i, j);
            scanf("%d" , &tableau[i][j]);
        }
    }
}


