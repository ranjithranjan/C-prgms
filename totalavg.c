#include<stdio.h>
int main()
{
int eng,chem,comp,phy,maths;
float total,avg;
printf("enter 5 subjects marks :\n");
scanf("%d%d%d%d%d",&eng,&chem,&comp,&phy,&maths);
total=eng+chem+comp+phy+maths;
avg=total/5;
printf("total marks=%f\n",total);
printf("avg marks=%f\n",avg);
}

