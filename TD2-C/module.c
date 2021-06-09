#include "module.h"
#include <stdio.h>
#include <stdlib.h>

int mylen2(char *s)
{
    int r = 0;
    for (int i = 0; *(s + i) != 0; i++)
    {
        r++;
    };
    return r;
}

void print_char(char *s)
{
    for (int i = 0; *(s + i) != 0; i++)
    {
        printf("%c", *(s + i));
    };
    printf("\n");
}

char *char_dynamique(const char s[])
{
    int n = mylen(s);
    char *l = (char *)malloc((n + 1) * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        *(l + i) = s[i];
    };
    *(l + n) = 0;
    return l;
}

int nb_de_e(char *s)
{
    int r = 0;
    for (int i = 0; *(s + i) != 0; i++)
    {
        if (*(s + i) == 'e')
        {
            r++;
        };
    };
    return r;
}

char *copie_modif_premier(char *s, char x)
{
    int n = mylen2(s);
    char *l = (char *)malloc((n + 1) * sizeof(char));
    *l = x;
    for (int i = 1; i < n; i++)
    {
        *(l + i) = *(s + i);
    };
    *(l + n) = 0;
    return l;
}

int *liste_vide(void)
{
    int *l = (int *)malloc(0);
    return l;
}

int longueur(int *l)
{
    int r = 0;
    for (int i = 0; *(l + i) != NULL, i++)
    {
        r++;
    };
    return r;
}

void add_element(int *l)
{
    int n = longueur(l) int *l = (int *)malloc(n + sizeof(int))
}

void print_list(int *l)
{
    for (int i = 0; (l + i) != NULL; i++)
    {
        printf("%d\n", i);
    };
}