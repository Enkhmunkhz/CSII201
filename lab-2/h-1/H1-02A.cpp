#include <stdio.h>
#include <math.h>
main(){
	float a,b,c,d;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	printf("d=");
	scanf("%f",&d);
	printf("tegshitgeliin hariu bol= %.2f", d*sqrt(pow((pow(a,3)+b/c),2) +d)/(d*d -(a*b)/c ));
}
