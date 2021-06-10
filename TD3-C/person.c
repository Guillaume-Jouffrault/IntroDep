#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void print_person(Person *h)
{
    printf("%s | %s | %s \n", h->p, h->n, h->d);
}

Person *create_person(char *prenom, char *nom, char *date_naissance)
{
    Person *h = (Person *)malloc(sizeof(Person));
    h->p = prenom;
    h->n = nom;
    h->d = date_naissance;
    return h;
}

Person *dupplicate(Person *h)
{
    Person *h_ = create_person(h->p, h->n, h->d);
    return h_;
}