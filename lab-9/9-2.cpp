#include <stdio.h>
int min(int, int, int, int, int);
int min2(int, int);
int main()
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("%d", min(a, b, c, d, e));
}
int min(int a, int b, int c, int d, int e)
{
	return min2(e,min2(d,min2(c,min2(a,b))));
}
int min2(int x, int y){
	if (x>y)
	return y; 
	else return x;
}
