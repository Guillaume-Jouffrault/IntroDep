#include <stdio.h>
#include "module.h"

int main()
{
    const char s[] = "pour";
    char *l = char_dynamique(s);
    char x = 't';
    char *copie_l = copie_modif_premier(l, x);
    print_char(l);
    printf("copie_modif_premier(%c) = ", x);
    print_char(copie_l);
}