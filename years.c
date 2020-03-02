#include <stdio.h>
int main()
 {
float  y, m, w;	
int d;
printf("Input no. of d\n ");
scanf("%d", &d);
y =d/365;
m =d/30;
w = d/7;
printf(" y=%f,m=%f,w=%f",y,m,w);
}
