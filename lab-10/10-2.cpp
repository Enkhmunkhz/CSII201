#include<stdio.h>
int count(int n){
	int i,countt=0;
	for (i=2;i<=n-1;i++){
		if(n%i==0)
		countt++;
	}
	return countt;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d", count(n));
}
