#include <stdio.h>
#include "module.h"

int main() {
    char s[]="abc";
    printf("longeur(%s) = %d\n",s,mylen(s));
    printf("%d\n",'a'<'b');
    printf("%d\n",'c'<'b');
}