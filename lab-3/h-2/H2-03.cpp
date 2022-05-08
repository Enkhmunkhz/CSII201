#include<stdio.h>
#include<math.h>
main()
{
	float s,x;
	printf("avsan onoog oruulna uu:\n");
	scanf("%f",&x);
	s=x/35*100;
	if(s>=90){
		printf("%.1fA",s);
	}
	else if(s>=80){
		printf("%.1fB",s);
	}
	else if(s>=70){
		printf("%.1fC",s);
	}
	else if(s>=60){
		printf("%.1fD",s);
	}
	else if(s<60){
		printf("%.1fF",s);
	}
}
