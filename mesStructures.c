//
// Created by User on 04/10/2021.
//
#include "mesStructures.h"
#include <stdio.h>

NbRatio saisirInfos(void) //fonction qui renvoie deux entiers confondu dans une variable
{
    NbRatio nbr1;
    printf("Saisissez le numerateur : \n");
    scanf("%d", &nbr1.numerateur);
    printf("Saisissez le denominateur : \n");
    scanf ("%d", &nbr1.denominateur);
    return nbr1;
}

void afficherInfos(NbRatio nbr1){ //renvoie un nombre rationel
    printf("le nombre rationnel est %d/%d.\n", nbr1.numerateur, nbr1.denominateur);
}

NbRatio multiplication(NbRatio nbr1, NbRatio nbr2)//Fonction qui multiplie deux nombres ratios, IN : 2 nombres ratios, OUT : 1 nombre ratio
{
    int numerateur = nbr1.numerateur * nbr2.numerateur;
    int denominateur = nbr1.denominateur * nbr2.denominateur;
    printf("La multiplication des deux rationnels est egale a %d/%d\n", numerateur, denominateur);
}

NbRatio addition(NbRatio nbr1, NbRatio nbr2) //Fonction qui additionne deux nombres ratios, IN : 2 nombres ratios, OUT : 1 nombre ratio
{
    int numerateur = nbr1.numerateur*nbr2.denominateur + nbr2.numerateur*nbr1.denominateur;
    int denominateur = nbr1.denominateur*nbr2.numerateur;
    printf("la somme des deux rationnels est egale a %d/%d\n", numerateur, denominateur);
}