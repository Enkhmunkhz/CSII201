#include<stdio.h>
#include<string.h>
int main(){
	char s[]="hello";
	char s2[20]="MUIS-iihaan";
	for(int i=0;i<=strlen(s);i++)
	s2[i]=s[i];
	printf("%s",s2);
	return 0;
}
