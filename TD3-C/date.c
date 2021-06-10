#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void print_date(Date *d)
{
    printf("%d/%d/%d \n", d->j, d->m, d->a);
}

Date *create_date(int jour, int mois, int annee)
{
    Date *d = (Date *)malloc(sizeof(Date));
    d->j = jour;
    d->m = mois;
    d->a = annee;
    return d;
}

int compare_date(Date *d1, Date *d2)
{
    return (d1->j == d2->j) && (d1->m == d2->m) && (d1->a == d2->a);
}

Date *dupplicate(Date *d)
{
    Date *d_ = create_date(d->j, d->m, d->a);
    return d_;
}