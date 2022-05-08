#include<stdio.h>
#include<math.h>
main()
{
	int n,a,b,c,d;
	printf("4 orontoi too oruulna uu:");
	scanf("%d",&n);
		if(1000>n||9999<n){
		printf("4 orontoi too oruulna uu!!\n");
		scanf("%d",&n);
	}
	else
	a=n/1000;
	b=(n/100)%10;
	c=(n%100)/10;
	d=n%10;
	if(a==d && b==c){
	printf("aziin too mun");}
	else printf("aziin too bish");
}
