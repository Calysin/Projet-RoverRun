//
// Created by cheni on 24/10/2024.
//

#ifndef UNTITLED1_ARBRE_N_AIRES_H
#define UNTITLED1_ARBRE_N_AIRES_H

#include "node.h"
#include "stack.h"

typedef struct s_tree {
    t_node *root;
} t_tree;

t_tree createTree(int nbsons); // create empty tree
t_tree CreationOfTheARBREnotanyarbrebutTHEarbre(int nbcards, int nbfeuilles); // function that calls the other ones 


void remplissageTree (t_stack cartes, t_node* curr, int nbfeuilles); // big function that fill the tree (for now with int after with t_moves)


t_stack createCards (int nbcards); // create the stack of the diffrents move options (for now int but have to be t_moves)
int, t_stack depilernieme (t_stack stack, int nieme); // enable to pop the nth element from a stack and return both the new stack and the poped value

#endif //UNTITLED1_ARBRE_N_AIRES_H
