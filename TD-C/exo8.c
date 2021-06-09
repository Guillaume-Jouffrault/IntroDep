#include <stdio.h>
#include "module.h"

int main() {
    char s[]="abcba";
    printf("palindrome(%s) = %d\n",s,palindrome(s));
}