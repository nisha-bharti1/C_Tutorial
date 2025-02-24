#include <stdio.h>

int cube(int,int,int);

int main(){
    int result;
    
    result=cube(5,7,8);
    printf("cube = %d ",result);

    return 0;
}

int cube(int a, int b, int c){

    return a*b*c;
}