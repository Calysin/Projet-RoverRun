//
// Created by cheni on 24/10/2024.
//

#include "arbre n aires.h"
#include <stdio.h>
#include <stdlib.h>


t_tree createTree(int nbsons)
{
    t_tree tree;
    t_node root;
    root = CreationDUnUnePetitPetiteNodePasPiqueDesHannetons(NULL, 0, nbsons);
    tree.root = root;
    return tree;
}

t_tree CreationOfTheARBREnotanyarbrebutTHEarbre(int nbcards, int nbfeuilles)
{
    t_tree tree;
    tree = createTree(nbcards);
    t_stack cartes;
    cartes = createCards (nbcards);
    remplissageTree (cartes, tree.root, nbfeuilles)
    return tree;
}

t_stack createCards (int nbcards){
    t_stack cards;
    cards = createStack(nbcards);
    for (int i=0, i<nbcards, i++){
        cards.values[i] = rand() % 10;
        cards.nbElts ++;
    }
    return cards;
}

int, t_stack depilernieme (t_stack stack, int nieme){
    t_stack *tmp;
    int dep;
    *tmp = createStack(stack->nbElts);
    for (int i=0, i<nieme, i++){
        push(tmp, pop(stack));
    }
    dep = pop(stack);
    for (int i=0, i<nieme, i++){
        push(stack, pop(tmp));
    }
    return dep, stack;
}

void remplissageTree (t_stack cartes, t_node* curr, int nbfeuilles){
    if (cartes.nbElts > nbfeuilles){
        t_node son;
        t_stack tmp;
        son = CreationDUnUnePetitPetiteNodePasPiqueDesHannetons(curr, 0, cartes.nbElts-1);
        for (int i=0, i< cartes.nbElts, i++){
            son.val, tmp  = depilernieme(cartes,i);
            curr->son[i] = &son 
            remplissageTree(tmp, &son, nbfeuilles);
        }
    }
}
