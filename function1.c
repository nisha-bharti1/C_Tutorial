// 	Function with arguments and no return value 

#include<stdio.h>

void add(int,int);

int main(){
    int a=5,b=7;

    add(a,b); // argument
    return 0;
}

void add(int a,int b){ // parameter
    int result;

    result=a+b;
    printf("result = %d ",result);
}

