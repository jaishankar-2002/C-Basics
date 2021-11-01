/***********************************************************************

10(dividend) % 2(divisor) = 0 (remainder)

10(dividend) / 2(divisor) = 5 (QUOTIENT)

 9(dividend) % 2(divisor) = 1 (remainder)

************************************************************************/
#include<stdio.h>
void main()
{
	int a=10, b=2 ;
	
	printf(" the sum of %d and %d is %d \n", a , b , a+b );
	
	printf(" the difference of %d and %d is %d \n", a , b , a-b );
	
	printf(" the multiplication of %d and %d is %d \n", a , b , a*b);
	
	printf(" quotient when %d is divided by %d is %d \n", a , b, a/b );
	
	printf(" reminder when %d is divided by %d is %d \n", a , b , a%b );
	
	printf(" the sum of all arithmetic operators is %d ",(a+b) + (a-b) + (a*b) + (a/b) + (a%b) );
}
