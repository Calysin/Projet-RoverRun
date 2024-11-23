//
// Created by cheni on 24/10/2024.
//

#ifndef UNTITLED1_ARBRE_N_AIRES_H
#define UNTITLED1_ARBRE_N_AIRES_H

typedef struct s_node
{
    int value;
    struct s_node *prev;
    struct s_node **son; //tab de pointeurs (enfants)
    int nbSon; // taille physique du tableau
} t_node;

typedef struct s_tree {
    t_node *root;
} t_tree;

t_node CreationDUnUnePetitPetiteNodePasPiqueDesHannetons(t_node *prev, int val, int nbSon)
t_tree CreationOfTheARBREnotanyarbrebutTHEarbre();

#endif //UNTITLED1_ARBRE_N_AIRES_H