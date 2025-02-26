#include <stdio.h>

int main()
{
    int a=8,b=9,i,c=6;
    int *arr[2]={&a,&b},arr1[4]={1,2,3,4};
    int *ptr=NULL,*ptr2=NULL;
    int **ptr1=NULL;


    printf("address of a =%p\n",&a);
    printf("address of b =%p\n",&b);
    for(i=0; i<2; i++)
    {
        printf("%d\n",*arr[i]);
    }


    ptr=&c;
    ptr1=&ptr;

    printf("vlaue of ptr %p \n value of ptr1 %p\n",ptr,ptr1);
    printf("vlaue of c through pointer %d \n value of c through double pointer %d\n",*ptr,**ptr1);

    ptr2=arr1;

    printf("value for first index of arr1 %d \n", arr1[0]);
    printf("value for first index of through pointer %d \n", *ptr2);
    ptr2++;
    printf("value for first index of through pointer %d \n", *ptr2);
    ptr2--;
    printf("value for first index of through pointer %d \n", *ptr2);
    return 0;
}