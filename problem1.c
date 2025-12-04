#include<stdio.h>
int main(){
int fan,light,ac,refrigerator,totalUnits,estimatedbills = 0;
printf("enter usage hours for all appliances of 30 days :");
printf("\nFAN :");
scanf("%d",&fan);
printf("\nLIGHT :",light);
scanf("%d",&light);
printf("\nAC :",ac);
scanf("%d",&ac);
printf("\nREGRIGERATOR :");
scanf("%d",&refrigerator);

int kwhFan = (75*fan)/1000;
int kwhLight = (10*light)/1000;
int kwhAc = (1500*ac)/1000;
int kwhRef = (200*refrigerator)/1000;

totalUnits = kwhAc+kwhFan+kwhLight+kwhRef;
printf("\n total units consumed %d",totalUnits);

estimatedbills = totalUnits*6;
printf("\n estimated bill %d:",estimatedbills);
return 0;
}
