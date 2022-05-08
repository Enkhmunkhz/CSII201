#include <stdio.h>
#include <math.h>
main(){
	float a,b,c,A,B;
	printf("a b too bolon A(gradus) oruulna uu\n");
	scanf("%f%f%f",&a,&b,&A);
	B=A*3.14/180;
	c=sqrt(pow(b,2)+pow(a,2)-2*a*b*cos(B));
	printf("cos(%f)=%f\n",A,cos(B));
	printf("c=%.3f",c);
}
