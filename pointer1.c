#include <stdio.h>

int main(){

    int a=10,b=12;
    int *ptr=NULL;

    void *ptr1=NULL;

    const int c=2;
    const int *ptr2=NULL;

    ptr =&a;
    printf(" ptr = %d ", *ptr);

    ptr1=&b;
    printf(" ptr1 = %d ", (*(int*)ptr1));

    ptr2 = &c;

    // *ptr2 = 15;
    printf(" ptr2 = %d ", *ptr2);


}