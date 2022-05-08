#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Triangle{
	int a, b, c;
};
double find_area(Triangle g)
{
	int p, s;
	p=g.a+g.b+g.c;
	s=sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
	return s;
}
int main()
{
	struct Triangle x, y;
	puts("1-r gurvaljnii taluud:");
	scanf("%d%d%d", &x.a, &x.b, &x.c);
	puts("2-r gurvaljnii taluud:");
	scanf("%d%d%d", &y.a, &y.b, &y.c);
	if(find_area(x)>find_area(y))
		printf("1-r gurvaljin tom");
	else if (find_area(x)==find_area(y))
		printf("2 gurvaljin tentsuu");
	else
		printf("2-r gurvaljin tom");
	return 0;
}
