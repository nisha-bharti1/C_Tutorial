#include <stdio.h>

int add();

int main(){

    int (*ptradd) () =add;

    ptradd();
    return 0;
}

int add(){
    int a =4, b=6;
    printf(" addition = %d ", a+b);

    return 0;
}