//
// Created by User on 06/10/2021.
//

#include "exercices.h"
#include "mesStructures.h"
#include "tableau.h"
#include <stdio.h>

void exo1()
{
    NbRatio nbr1 = saisirInfos();
    afficherInfos(nbr1);
    NbRatio nbr2 = saisirInfos();
    afficherInfos(nbr2);
    multiplication(nbr1,nbr2);
    addition(nbr1,nbr2);
}

void exo2()
{
    remplirTableau();
}

void exo3() {
    int p = 0;
    int tableau2D[LIGNE][COLONNE];
    int tableau1D[LIGNE*COLONNE];
    remplirTableau2D(tableau2D);
    int i = 0, j = 0;
    for (j = 0 ; j < LIGNE ; j++)
    {
        for (i = 0 ; i < COLONNE ; i++)
        {
            tableau1D[p] = tableau2D[j][i];
            p++;
            printf("%4d" , tableau2D[j][i]);
        }
        printf("\n");
    }
    afficherTableau(tableau1D, 12);
}