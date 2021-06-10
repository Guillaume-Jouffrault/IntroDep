#include "date.h"

#ifndef ELEMENT

#define ELEMENT
typedef struct Element Element;
struct Element
{
    Date *date;
    Element *next;
};

/* typedef struct Element
{
    Date *date;
    Element *next;

} Element; */

#endif

#ifndef LIST

#define LIST
typedef struct _List
{
    Element *premier;

} List;

Element *create_element(Date *d, Element *e);
List *liste_vide(void);
List *insert(Date *d, List *l);
void print_list(List *l);
List *list_n(int n, int mois, int annee);

#endif