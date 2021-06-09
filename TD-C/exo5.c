#include <stdio.h>
#include "module.h"

int main() {
    int n=4;
    int u[4]={1,2,3,4};
    int v[4]={10,20,30,40};
    int s[4];
    somme_tab(u,v,s,n);
    affichage(s,n);
}