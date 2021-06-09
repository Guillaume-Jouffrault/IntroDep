#include <stdio.h>
#include "module.h"

int main() {
    char s[]="abc";
    char v[]="abd";
    printf("%s == %s : %d\n",s,v,compare_s(s,v));
}