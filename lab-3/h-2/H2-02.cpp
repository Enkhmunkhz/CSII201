#include <stdio.h>
#include<math.h>
main(){
	int a,b,c,d;
	printf("1orontoi uur 4 too oruulna uu:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d%d%d%d ",a,b,c,d);
	printf("%d%d%d%d ",a,b,d,c);
	printf("%d%d%d%d ",a,c,b,d);
	printf("%d%d%d%d ",a,c,d,b);
	printf("%d%d%d%d ",a,d,b,c);
	printf("%d%d%d%d\n",a,d,c,b);
	printf("%d%d%d%d ",b,a,c,d);
	printf("%d%d%d%d ",b,a,c,d);
	printf("%d%d%d%d ",b,c,a,d);
	printf("%d%d%d%d ",b,c,d,a);
	printf("%d%d%d%d ",b,d,a,c);
	printf("%d%d%d%d\n",b,d,c,a);
	printf("%d%d%d%d ",c,a,b,d);
	printf("%d%d%d%d ",c,a,d,b);
	printf("%d%d%d%d ",c,b,a,d);
	printf("%d%d%d%d ",c,b,d,a);
	printf("%d%d%d%d ",c,d,a,b);
	printf("%d%d%d%d\n",c,d,b,a);
	printf("%d%d%d%d ",d,a,b,c);
	printf("%d%d%d%d ",d,a,c,b);
	printf("%d%d%d%d ",d,b,a,c);
	printf("%d%d%d%d ",d,b,c,a);
	printf("%d%d%d%d ",d,c,a,b);
	printf("%d%d%d%d",d,c,b,a);
}
