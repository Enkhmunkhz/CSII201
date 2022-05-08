#include<stdio.h>
int main()
{
	int x;
	int *z;
	z = &x;
	scanf("%d", z);
	printf("%d", x);
}
