#include "node.h"
#include <stdio.h>
#include <stdlib.h>

t_node CreationDUnUnePetitPetiteNodePasPiqueDesHannetons(t_node *prev, int val, int nbsons) {
    t_node *newNode = (t_node*)malloc(sizeof(t_node));
    newNode->value = val;
    newNode->prev = prev;
    newNode->nbSon = nbsons;
    if (nbSon > 0) {
        newNode->son = (t_node **)malloc(nbSon * sizeof(t_node *));
        // pour l'instant, son = NULL, mais a changer dans le main
        for (int i = 0; i < nbSon; i++) {
            newNode->son[i] = NULL;
        }
    } 
    else {
        newNode->son = NULL;
    }
    return *newNode;
}

