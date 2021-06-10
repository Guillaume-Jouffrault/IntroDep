#ifndef PERSON

#define PERSON

typedef struct _Person
{
    char *p;
    char *n;
    char *d;
} Person;

void print_person(Person *h);
Person *create_person(char *prenom, char *nom, char *date_naissance);
Person *dupplicate(Person *h);

#endif