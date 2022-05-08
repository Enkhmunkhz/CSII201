#include<stdio.h>
#include<math.h>
main()
{
	int y, m, d;
	printf("unuudur - 2022/2/28 \n");
	scanf("%d%d%d",&y,&m,&d);
	if(y==2022) 
	    {if(m==2) 
		    {if(d==28) printf("unuudur");
			 else if(d>28) printf("Ireedui");
			      else printf("Ongorson");}
	     else if(m>2) printf("Ireedui");
			  else printf("Ongorson");}
	else if(y>2022) printf("Ireedui\n");
	     else printf("Ongorson\n"); 
}
