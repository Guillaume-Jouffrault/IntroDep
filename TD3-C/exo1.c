#include <stdio.h>
#include <stdlib.h>
#include "date.h"

int main()
{

    Date *d1 = create_date(8, 6, 2021);
    print_date(d1);

    Date *d2 = create_date(9, 6, 2021);
    print_date(d2);

    printf("Egalité ? : %d\n", compare_date(d1, d2));

    printf("\n");
    print_date(d1);

    Date *d_ = dupplicate(d1);
    print_date(d_);

    printf("Egalité ? : %d\n", compare_date(d1, d_));
}