#include "module.h"
#include <stdio.h>
#include <stdlib.h>

int addOne(int n) {
    n = n + 1;
    return n;
}

int fibonacci(int n) {
    int a=0;
    int b=1;
    for (int i=2;i<=n;i++) {
        int c=b;
        b=a+b;
        a=c;
    };
    return b;
}

void stock_nb_pairs(int t[],int n) {
    for (int i=0;i<=n/2;i++) {
        t[i]=2*i;
    };
}

void affichage(int t[],int n) {
    for (int i=0;i<n;i++) {
        printf("element %d :\t%d\n",i+1,t[i]);
    };
}

void somme_tab(int u[],int v[],int s[],int n) {
    for (int i=0;i<n;i++) {
        s[i]=u[i]+v[i];
    };
}

int mylen(const char s[]) {
    int r=0;
    for(int i=0;s[i]!=0;i++) {
        r++;
    };
    return r;
}

/* 
int compare_s(const char s[],const char v[]) {
    int n= mylen(s);
    for (int i=0;s[i]==v[i];i++) {}
    if ( s[i]==v[i] ) {}
    else {}
    };
} */

int mylen2(char* s) {
    int r=0;
    for (int i=0;*(s+i)!=0;i++) {
        r++;
    };
    return r;
}

char* char_dynamique(char s[]) {
    int n=mylen(s);
    char* l=(char*) malloc((n+1)*sizeof(char));
    for (int i=0;i<n;i++) {
        *(l+i)=s[i];
    }; 
    *(l+n)=0;
    return l;   
}

int nb_de_e(char* s) {
    int r=0;
    for (int i=0;*(s+i)!=0;i++) {
        if ( *(s+i) =='e' )
            {r++;};
    };
    return r;
}