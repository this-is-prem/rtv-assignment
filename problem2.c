#include<stdio.h>
int main(){
int att[30],j,absent;
float percentage;
printf("enter the attendance for 30 days (1 = present, 0 = absent) :\n");
for(int i=0;i<30;i++){
    scanf("%d",&att[i]);
}
for(int i = 0;i<30;i++){
    if (att[i]==1){
        j++;
    }
}
absent =30-j;
percentage = (j*100)/30;
printf("NUMBER OF PRESENT DAYS : %d",j);
printf("\nNUMBER OF ABSENT DAYS : %d",absent);
printf("\nPERCENTAGE : %f %",percentage);
if(percentage>=75){
    printf("student meets minimum requirement");
} else {
printf("student doesnot meet minimum requirement");
}
return 0;
}
