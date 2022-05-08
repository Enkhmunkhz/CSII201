#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=(a>b)*a+(a<=b)*b;
	d=(a<b)*a+(a>=b)*b;
	printf("%d %d",d,c);
}
