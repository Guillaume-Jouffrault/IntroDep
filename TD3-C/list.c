#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "list.h"

Element *create_element(Date *d, Element *e)
{
    Element *e_ = (Element *)malloc(sizeof(Element));
    e_->date = d;
    e_->next = e;
    return e_;
}

List *liste_vide(void)
{
    Element *e = create_element(create_date(0, 0, 0), NULL);

    List *l = (List *)malloc(sizeof(List));
    l->premier = e;
    return l;
}

List *insert(Date *d, List *l)
{
    l->premier = create_element(d, l->premier);
    return l;
}

void print_list(List *l)
{
    Element *e = l->premier;
    if (e->next != NULL)
    {
        print_date(e->date);
        l->premier = e->next;
        print_list(l);
    }
}

List *list_n(int n, int mois, int annee)
{
    List *l = liste_vide();
    for (int i = 1; i <= n; i++)
    {
        Date *d = create_date(i, mois, annee);
        l = insert(d, l);
    };
    return l;
}