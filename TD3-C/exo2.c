#include <stdio.h>
#include <stdlib.h>
#include "person.h"

int main()
{
    Person *h = create_person("tom", "riddle", "11/09/1957");
    print_person(h);

    Person *h_ = dupplicate(h);
    print_person(h_);
}