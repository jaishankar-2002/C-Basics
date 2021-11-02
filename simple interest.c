
#include<stdio.h>
int main()
{

float p,t,r,si;

printf("enter the principal amount - ");
scanf("%f", &p);

printf("\n");

printf("enter the time in years - ");
scanf("%f",&t);

printf("\n");

printf("enter the rate of interest - ");
scanf("%f",&r);

printf("\n");


si=(p*t*r)/100 ;
printf("the simple interest is %f",si);

return 0 ;
	
}
