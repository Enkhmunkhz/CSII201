#include<stdio.h>
int count(int n, int A[]){
	int i, countt=0, j=0;
	for(i=2; i<=n-1; i++){
		if(n%i==0){
			countt++;
			A[j]=i;
			j++;
		}
	}
	return countt;
}
int main(){
	int n, s;
	int b[100];
	scanf("%d",&n);
	s = count(n, b);
	printf("%d shirheg toond huvaagdan\n", s);
	puts("huvaagdagchid:");
	for(int j=0; j<s; j++){
		printf("%d ", b[j]);
	}
}
