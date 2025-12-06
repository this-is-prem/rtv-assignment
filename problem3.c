#include<stdio.h>
struct employee {

char name[20];
int age;
int salary;
int id;

};

int main(){

int temp;
float average;
struct employee e1;

printf("enter name of 1st employee :");
scanf("%[^\n]",e1.name);
printf("enter age of 1st employee :");
scanf("%d",&e1.age);
printf("enter salary of 1st employe :");
scanf("%d",&e1.salary);
printf("enter id of 1st employee :");
scanf("%d",&e1.id);

struct employee e2;
printf("\nenter name of 2nd employee :");
scanf(" %[^\n]",e2.name);

printf("enter age of 2nd employee :");
scanf("%d",&e2.age);

printf("enter salary of 2nd employe :");
scanf("%d",&e2.salary);

printf("enter id of 2nd employee :");
scanf("%d",&e2.id);

struct employee e3;
printf("\nenter name of 3rd employee :");
scanf(" %[^\n]",e3.name);

printf("enter age of 3rd employee :");
scanf("%d",&e3.age);

printf("enter salary of 3rd employe :");
scanf("%d",&e3.salary);

printf("enter id 3rd employee :");
scanf("%d",&e3.id);

struct employee e4;

printf("\nenter name of 4th employee :");
scanf(" %[^\n]",e4.name);

printf("enter age of 4th employee :");
scanf("%d",&e4.age);

printf("enter salary of 4th employe :");
scanf("%d",&e4.salary);

printf("enter id of 4th employee :");
scanf("%d",&e4.id);

struct employee e5;
printf("\nenter name of 5th employee :");
scanf(" %[^\n]",e5.name);

printf("enter age of 5th employee :");
scanf("%d",&e5.age);

printf("enter salary of 5th employe :");
scanf("%d",&e5.salary);

printf("enter id of 5th employee :");
scanf("%d",&e5.id);

//printing employee details

printf("\n=====================================================\n");
printf("                     EMPLOYEE LIST\n");
printf("=====================================================\n");
printf("%-20s %-10s %-10s %-10s\n", "Name", "Age", "Salary", "ID");
printf("-----------------------------------------------------\n");

printf("%-20s %-10d %-10d %-10d\n", e1.name, e1.age, e1.salary, e1.id);
printf("%-20s %-10d %-10d %-10d\n", e2.name, e2.age, e2.salary, e2.id);
printf("%-20s %-10d %-10d %-10d\n", e3.name, e3.age, e3.salary, e3.id);
printf("%-20s %-10d %-10d %-10d\n", e4.name, e4.age, e4.salary, e4.id);
printf("%-20s %-10d %-10d %-10d\n", e5.name, e5.age, e5.salary, e5.id);

printf("=====================================================\n");


average = (e1.age+e2.age+e3.age+e4.age+e5.age)/5.0;
printf("\n\nAVERAGE AGE OF ALL EMPLOYEES IS : %f",average);

int hSalary[5]={e1.salary,e2.salary,e3.salary,e4.salary,e5.salary};
for(int i =0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(hSalary[i]>hSalary[j]){
            temp = hSalary[i];
            hSalary[i]=hSalary[j];
            hSalary[j]=temp;
    }
}
}
printf("\nHIGHEST SALARY IS : %d",hSalary[4]);

return 0;
}
