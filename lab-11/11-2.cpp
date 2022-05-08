#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct point{
	int x, y;
};
double distance(struct point a, struct point b)
{
	int X, Y, d;
	X = pow(a.x - b.x, 2);
	Y = pow(a.y - b.y, 2);
	d = sqrt(X + Y);
	return d;
}
int main()
{
	int d;
	struct point a, b;
	puts("Ehnii tseg: ");
	scanf("%d%d", &a.x, &a.y);
	puts("Hoyrdoh tseg: ");
	scanf("%d%d", &b.x, &b.y);	
	d = distance(a, b);
	printf("2 tsegiin hoorondoh zai: %d", d);
	return 0;
}
