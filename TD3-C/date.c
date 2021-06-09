#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void print_date(Date *d) {
    printf("%d/%d/%d \n",d->j,d->m,d->a);
}

Date* create_date(int jour,int mois,int annee) {
    Date *d = (Date*)malloc(sizeof(Date));
    d->j = jour;
    d->m = mois;
    d->a = annee;
    return d;
}