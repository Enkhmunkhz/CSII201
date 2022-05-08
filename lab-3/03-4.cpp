#include<stdio.h>
#include<math.h>
int main()
{   
	float a=0.5,b=0.5,c=0,d=1,f=0;
	a || printf("o") && c;
	c && d || printf ("x");
	(d||b)&&f||printf("x");
	a+b==1 && printf ("x");
	f && printf("o");
	b && d || printf("o");
	b+d==3 && printf ("o");
}
