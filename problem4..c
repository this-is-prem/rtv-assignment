#include<stdio.h>
union num {

long int adhaar;
char passport[20];

};
int main(){
int option;
union num n1;
printf("enter option (1-adhaar ,2-passport) : ");
scanf("%d",&option);
switch(option){
case 1:
    printf("enter adhaar number : ");
    scanf("%d",&n1.adhaar);
    printf("\n STORED ADHAAR NUM = %lu",n1.adhaar);
    break;
case 2:
    printf("enter passport number :");
    scanf("%s",n1.passport);
    printf("\nSTORED PASSPORT NUM = %s",n1.passport);
    break;
default:
    printf("enter valid option");
    return 1;

}
printf("\nSize of union = %d",sizeof(n1));
printf("\nadhaar = %d",sizeof(n1.adhaar));
printf("\npassport = %d",sizeof(n1.passport));
printf("\n THE SIZE OF THE UNINON IS THE SIZE OF THE LARGEST ELEMENT ");
return 0;
}
