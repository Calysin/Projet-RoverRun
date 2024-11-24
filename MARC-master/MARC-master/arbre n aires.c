//
// Created by cheni on 24/10/2024.
//

#include "arbre n aires.h"
#include <stdio.h>
#include <stdlib.h>

// La fonction à appeler dans le main (nbfeuilles c'est le nombre de cartes qu'on ne choisira pas sur le nombre total de cartes (nbcards))
t_tree, **t_node CreationOfTheARBREnotanyarbrebutTHEarbre(int nbcards, int nbfeuilles)
{
    t_tree tree;
    tree = createTree(nbcards);
    t_stack cartes;
    cartes = createCards (nbcards);
    remplissageTree (cartes, tree.root, nbfeuilles);
    t_node min;
    int valMin;
    min, valMin = rechercheMin(tree.root);
    t_node ** chemin;
    chemin = chemin (min)
    return tree, chemin;
}

// fonctions utiliser par les autres fonctions du fichier

t_tree createTree(int nbsons)
{
    t_tree tree;
    t_node root;
    root = CreationDUnUnePetitPetiteNodePasPiqueDesHannetons(NULL, 0, nbsons);
    tree.root = root;
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

int min(int a, int b){
    if (a>b){
        return 2
    }
    else{
        return 1
    }
}

// fonctions principales

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
    if (cartes.nbElts = nbfeuilles){
        curr->son=NULL
    }
}

t_node, int rechercheMin(t_node curr){
    if (curr.son == NULL){
        return curr, curr.value
    }
    else{
        int valmin, valtmp;
        t_node min, tmp;
        min, valmin = rechercheMin (curr.son[0]);
        for (int i=1, i< curr.nbsons, i++){
            tmp, valtmp = rechercheMin(curr.son[i]);
            if (valtmp<valmin){
                valmin = valtmp;
                min = tmp;
            }
        }
        return min, valmin+curr.value;
    }
}

** t_node chemin (t_node min, int depth){
    t_node ** chem;
    t_node tmp = min;
    chem = (t_node**)malloc(depth*sizeof(t_node));
    for (int i= 0, i<depth, i++){
        chem [depth-1-i] = tmp;
        tmp = tmp.prev;
    }
}
