#ifndef DATE /* if not define DATE */ 


#define DATE /*  then ... define DATE */
/* define A 3 définit A et remplace A par 3 dans tout le fichier */

typedef struct _Date {
    int j;
    int m;
    int a;
} Date;

void print_date(Date *d);
Date* create_date(int jour,int mois,int annee);

#endif /*fin du if */

/* Alternative : PRAGRMA ONCE */