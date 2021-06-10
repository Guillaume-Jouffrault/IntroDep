#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "list.h"

int main()
{
    List *l = list_n(5, 11, 2020);
    print_list(l);
}