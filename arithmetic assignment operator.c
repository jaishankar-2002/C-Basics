#include<stdio.h>
void main()
{
	
	int x = 10 , y = 4 , z = 3 ;
	x += y ; // x=x+y
	y -= z ; // y=y-z
	z += x ; // z=z+x
	y *= x ; // y=y*x
	x *= z ; // x=x*z
	printf(" %d , %d , %d",x,y,z);
	
}
