#include<stdio.h>
#include<math.h>
main(){
	float x1, x2, x3, y1, y2, y3, a, b, c, x, y, h, q;
	printf("1r tsegiin koordinatiig oruulna uu:\n");
	scanf("%f%f",&x1,&y1);
	printf("2r tsegiin koordinatiig oruulna uu:\n");
	scanf("%f%f",&x2,&y2);
	printf("3r tsegiin koordinatiig oruulna uu:\n");
	scanf("%f%f",&x3,&y3);
	a=sqrt(pow(x1,2)+pow(y1,2));
	b=sqrt(pow(x2,2)+pow(y2,2));
	c=sqrt(pow(x3,2)+pow(y3,2));
	h=(a<b)*a+(a>=b)*b;
	q=(h<c)*h+(h>=c)*c;
	if(q==a) {
	printf("hamgiin oirhon tseg bol  %.2f %.2f\n",x1, y1);}
	else if(q==b) {
	printf("hamgiin oirhon tseg bol  %.2f %.2f\n",x2, y2);}
	else printf("hamgiin oirhon tseg bol  %.2f %.2f\n",x3, y3);
	x=(a>b)*a+(a<=b)*b;
	y=(x>c)*x+(x<=c)*c;
	if(y==a) {
	printf("hamgiin hol tseg bol %.2f %.2f\n",x1, y1);}
	else if(y==b){
	printf("hamgiin hol tseg bol %.2f %.2f\n",x2, y2);}
	else printf("hamgiin hol tseg bol  %.2f %.2f\n",x3, y3);
}
