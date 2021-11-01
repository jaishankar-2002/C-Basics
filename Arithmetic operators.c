/***********************************************************************

10(dividend) % 2(divisor) = 0 (remainder)

10(dividend) / 2(divisor) = 5 (QUOTIENT)

 9(dividend) % 2(divisor) = 1 (remainder)

************************************************************************/
#include<stdio.h>
void main()
{
	int a=10, b=12 ;
	
	printf(" the sum of %d and %d is %d \n",a,b,a+b);
	printf(" the difference of %d and %d is %d \n",a,b,a-b);
	printf(" the multiplication of %d and %d is %d \n",a,b,a*b);
	printf(" the division of %d and %d is %d \n",a,b,a/b);
	printf(" the modulo division of %d and %d is %d \n",a,b,a%b);
}
