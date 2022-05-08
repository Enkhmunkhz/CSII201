#include <stdio.h>
int fp(int);
int main(){
	int a;
	scanf("%d",&a);
	if(fp(a)==1)
 		printf("%d palindrome too",a);
 	else
		printf("%d palindrome bish too",a);
}
int fp(int a){
	int b=0, s=0,c=a;
	while(a>0)
	{
		b = a % 10;
		s = s*10 +b;
		a = a / 10;		
	}
	if(c==s)
		return 1;
	return 0;
}

