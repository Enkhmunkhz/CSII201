#include<stdio.h>
#include<math.h>
int main()
{
	//bolj baina gej hevlehiin tuld a too ni b bolon c toonoos baga utga garaas ugugduh ghdee c too ni b toonoos baga baih uyd "bolj " gej hevlene.
	//a too ni 3-t huvaagdahad 0 uldegdel ugdug buyu 3-t huvaagddag esvel c too ni 5-t huvaahad 3 uldegdel ugdug baival "bna." gej hevlene.
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 c<b && a<c && printf("bolj ");
 (a%3==0 || c%5==3)&&printf("bna.\n");
}
