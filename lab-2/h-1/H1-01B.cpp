#include <stdio.h>
#include <math.h>
main(){
	int a,b,c,d;
	float x,y;
	printf("a b c koeftsientiig oruulnuu\n");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d<0){
	printf("shiidgui");}
	else{
	x=(-b+(sqrt(d)))/(2*a);
	y=(-b-(sqrt(d)))/(2*a);
	printf("x iin utguud bol\n");
	printf("%.2f %.2f",x,y);}
}
