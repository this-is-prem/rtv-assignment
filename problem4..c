#include<stdio.h>
union num {

int adhaar;
int passport;

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
    break;
case 2:
    printf("enter passport number :");
    scanf("%d",&n1.passport);
    break;
default:
    printf("enter valid option");


}
printf("adhaar = %d",n1.adhaar);
printf("\npassport = %d",n1.passport);

return 0;
}
