//
// Created by User on 04/10/2021.
//

#ifndef TP5_MESSTRUCTURES_H
#define TP5_MESSTRUCTURES_H

typedef struct
{
    int numerateur, denominateur;
} NbRatio;

NbRatio saisirInfos();
void afficherInfos(NbRatio nbr1);
NbRatio multiplication(NbRatio nbr1, NbRatio nbr2);
NbRatio addition(NbRatio nbr1, NbRatio nbr2);


#endif //TP5_MESSTRUCTURES_H