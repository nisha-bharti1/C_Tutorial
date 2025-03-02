
#include<stdio.h>
#include<string.h>

struct emp{
    char emp_name[15], joindate[15];
    float salary;
};

int main(){
     int i;
     float total_salary=0;
    // printf("Enter the number of employees to store records ");
    // scanf("%d",&n);

    struct emp empdetails[5];

    for(i=0; i<5; i++){
        printf("Enter the name of employee %d :\n", i+1);
        printf("Name : ");
        // scanf(" %[^\n] ",&empdetails[i].emp_name);
        gets(empdetails[i].emp_name);
        printf("Date of Joining : ");
        scanf("%s",&empdetails[i].joindate);
        printf("Salary :");
        scanf("%f",&empdetails[i].salary);
        getchar();


        total_salary=total_salary+empdetails[i].salary;
    }

    
    printf("\n Employee details :\n");
    printf("--------------------------------------------\n");
    printf("Name\t\tDate of joining\t\tSalary\n");
    printf("----------------------------------------------------\n");

    for(i=0; i<5; i++)
    {
        printf("%s\t\t%s\t\t%f\n",empdetails[i].emp_name,empdetails[i].joindate,empdetails[i].salary);
    }

    printf("\nTotal salary outgo for the month: %f\n",total_salary);

    return 0;

}