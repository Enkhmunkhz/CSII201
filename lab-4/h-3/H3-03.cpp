#include<stdio.h>
#include<math.h>
main()
{
	int h, w, s, h1, w1, a, b;
	printf("Undur-Jin-Huis gesen daraallar medeelelee oruulna uu. Eregtei bol 1, emegtei bol 2 gej oruulna \n");
	printf("Unduruu cm-t, jingee kg-nd bodoj oruulna. Jishee ni 187 70 1 \n");
	scanf("%d%d%d",&h,&w,&s);
	h1=h-150;
	a=h1/2.5;
	if(s==1) {w1=52+a*1.9;
	          if(w==w1) printf("Heviin jin");
	          else if(w>w1) printf("Iluudel jin");
			       else printf("Jingiin duragdal");}
	else {w1=49+a*1.7;
	     if(w==w1) printf("Hewiin jin");
	     else if(w>w1) printf("Iluudel jin");
	          else printf("Jingiin dutagdal");}
}
