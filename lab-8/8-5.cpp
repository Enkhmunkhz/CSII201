#include<stdio.h>
#include<string.h>
int main(){
	char s[50], g[50], x[100];
	scanf("%s%s",s,g);
	int i, j;
	for(i=0;i<strlen(s);i++){
		x[i]=s[i];
	}
	for( j=0;j<strlen(g);j++){
		x[i]=g[j];
		i++;
	}
	printf("%s",x);
	return 0;
}
