//
// Created by cheni on 24/10/2024.
//

#ifndef UNTITLED1_ARBRE_N_AIRES_H
#define UNTITLED1_ARBRE_N_AIRES_H

typedef struct s_node
{
    int value;
    struct s_node **sons;
    int nbSons; // taille physique du tableau
} t_node;

#endif //UNTITLED1_ARBRE_N_AIRES_H