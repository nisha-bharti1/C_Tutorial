#include <stdio.h>

int add(); // declaration of the function

int main()
{
    printf("line 1 \n");

    add(); //calling of the function

    printf("line 2 \n");
    add();
    add();
    add();
    return 0;
}

int add() // definition of the function  // without argument and without returning value
{

    int num1 = 5, num2 = 7, result;

    result= num1+num2;
    printf("result = %d\n", result);

    return 0;
}
