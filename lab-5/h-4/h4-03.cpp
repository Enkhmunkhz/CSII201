#include <stdio.h>
#include <math.h>
main()
{
	int d, i, a, b, h, s, k=7, y;
	s=0;
	a=0;
	printf("3-r sariin 1-n hed deh udur be: ");
	scanf("%d",&h);
	printf("!=Bayriin odor\n");
	printf("3r sariin calendar\n");
	printf("Mo\tTu\tWe\tTh\tFr\tSa\tSu\n");
	if(h==1) d=1;
	if(h==2) d=0;
	if(h==3) d=-1;
	if(h==4) d=-2;
	if(h==5) d=-3;
	if(h==6) d=-4;
	if(h==7) d=-5;
	y=d+6;
	while(d<=31){
		if(d<=0) {
		   printf("	");
		   d=d+1;
		   s++;
		    }
		else {
		i=(d-a*7)+s;
		if(i==7) { s=0;}
		if(i==k) {if(d==8 || d==18) {printf("%d!\t\n",d); k=y;}
				  else {printf("%d\t\n",d); k=y;}
		}
		else {if(d==8 || d==18) printf("%d!\t",d);
		      else printf("%d\t",d); }
		b=d%7;		
		if(b==0) a=a+1;
		d++;}	
	}
}
