#include <stdio.h>
#include "module.h"

int main()
{
    char *s = "abcdef";
    printf("longeur(%s) = %d \n", s, mylen2(s));
}