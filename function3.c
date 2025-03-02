// 	Function with no arguments but returns a value 

#include<stdio.h>

int add();

int main(){
    int R;

    R=add();
    printf("Result = %d", R);
    return 0;
}

int add(){ 
    int a=5,b=7;
    int result;

    result=a+b;
    return result;

}