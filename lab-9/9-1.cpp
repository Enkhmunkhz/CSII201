#include<stdio.h>
int is_even(int);
int main(){
	int n,i;
	scanf("%d",&n);
	printf("%d\n", is_even(n));
	for(int i=1; i<=n; i++){
	if(is_even(i)==0){
		printf("%d ",i);
	}
}}
int is_even(int a){
	if(a%2==1)
	return 0;
	return 1;
}
