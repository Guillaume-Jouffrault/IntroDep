#include <stdio.h>
#include "module.h"

int main() {
    int n=10;
    int taille=n/2+1;
    int t[taille];
    stock_nb_pairs(t,n);
    affichage(t,taille);
}