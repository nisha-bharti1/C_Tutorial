#include <stdio.h>

int main(){
    
    int a=7;
    int *ptr; // Declaration of pointer

    ptr=&a;

    printf("value of a = %d\n ",a);
    printf("Address of a = %p\n ",&a);
    printf("value of a through pointer = %d\n ", *ptr);
    printf("address of a through pointer = %p\n ", ptr);
    
    return 0;
}