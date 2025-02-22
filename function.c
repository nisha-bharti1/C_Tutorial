// Function with no arguments and no return value 
#include <stdio.h>

void add(); // declaration of the function
void sub();

int main()
{
    int num1;
    printf("line 1 \n");
    sub();
    add(); //calling of the function

    printf("line 2 \n");
    add();
    add();
    add();

    printf("num1 = %d",num1);
    return 0;
}

void add() // definition of the function  // without argument and without returning value
{

    int num1 = 5, num2 = 7, result;

    result= num1+num2;
    printf("result = %d\n", result);

}

void sub(){
    int num1 = 5, num2 = 7, result;

    result= num2 - num1;
    printf("result = %d\n", result);

}
