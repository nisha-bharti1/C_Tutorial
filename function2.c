//	Function with arguments and returns a value 
#include<stdio.h>

int add(int,int);

int main(){
    int a=5,b=7,R;

    printf("a = %d ", a);
    R=add(a,b);
    printf("Result = %d", R);
    return 0;
}

int add(int a,int b){ 
    int result;
    a=10;
    result=a+b;
    return result;
}

/*Homework

Que1 - Write a program to find cube of any number using fuction
Que2 - write a program to find diameter,circumference and area of circle using function
Que3 - Write a program to find smallest and largest number among two numbers using function


*/

