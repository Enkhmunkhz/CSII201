#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float talbai(float a, float b, float c);
struct Triangle{
		float a, b, c;};
int main()
{
	float p, s;
	puts("1r gurvaljnii taluud:");
	struct Triangle t1;
	scanf("%f%f%f", &t1.a, &t1.b, &t1.c);
	puts("2r gurvaljnii taluud:");
	struct Triangle t2;
	scanf("%f%f%f", &t2.a, &t2.b, &t2.c);
	if(talbai(t1.a, t1.b, t1.c)>talbai(t2.a, t2.b, t2.c))
	printf("1r gurvaljin ilvv tom");
	else if(talbai(t1.a, t1.b, t1.c)==talbai(t2.a, t2.b, t2.c))	
	printf("2 gurvaljin tentsuu");
	else
	printf("2r gurvaljin ilvv tom");
	return 0;
}
float talbai(float a, float b, float c)
{
	float p, s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s; 
}
