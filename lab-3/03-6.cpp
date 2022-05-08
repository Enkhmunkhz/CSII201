#include<stdio.h>
#include<math.h>
main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	((a==b)&&(a==c))&&printf("zuv gurvaljin")||((a!=b)&&(b!=c)&&(a!=c))&&printf("eldev talt")||(((a==b)!=c)||((a==c)!=b)||((b==c)!=a))&&printf("adil hajuud"); 
}
