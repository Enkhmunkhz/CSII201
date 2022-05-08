#include<stdio.h>
int palindrom(int);
int main(){
	int n; 
	scanf("%d",&n);
	printf("%d", palindrom(n));
}
int palindrom(int a){
	int i,s,d;
	d=a;
	s=0;
	while(a>0){
	i=a%10;
	s=s*10+i;
	a=a/10;
	}
	if (d==s){
		return 1;
	}
	else return 0;
}


