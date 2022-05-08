#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,x,y,h,q,p,s;
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	x=(a>b)*a+(a<=b)*b;
	y=(x>c)*x+(x<=c)*c;
	printf("hamgiin ih too bol %d\n",y);
	h=(a<b)*a+(a>=b)*b;
	q=(h<c)*h+(h>=c)*c;
	printf("hamgiin baga too bol %d\n",q);
	p=s-y-q;
	printf("goliin too bol %d",p);
}
