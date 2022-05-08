#include<stdio.h>
int digit_sum(int n){
	int a,i,c=0,d;
			while(n>0){
			d=n%10;
			c+=d;
			n/=10;
			}
		return c;
		}
int main(){
	int i,m;
	scanf("%d", &m);
	for (int i=1; i<=m; i++){
		if (i%digit_sum(i)==0){
			printf("%d ",i);
		}
	}
}

