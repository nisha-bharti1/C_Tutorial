#include <stdio.h>

int main()
{
    char str[15]="Hello";
    int i;
    for(i=0; i!=str['\0']; i++){
         if(str[i]=='l')
            break;
    }

    printf("%d",i+1);
}