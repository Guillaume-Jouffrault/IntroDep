#include <stdio.h>
#include "module.h"

int main()
{
    const char s[] = "eabeabe";
    char *l = char_dynamique(s);
    print_char(l);
    printf("nombre_de_e(%s) = %d \n", l, nb_de_e(l));
}