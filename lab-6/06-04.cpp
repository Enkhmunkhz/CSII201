#include<stdio.h>
#include<math.h>
int main(){
	int n,x,l,a;
	1<=n<100;
	printf("husnegtiin hemjee n toog ugnu uu: ");
	scanf("%d",&n);
	int A[n];
	printf("husnegt deh n shirheg elemtuudig ugnu uu: ");
	for(int i=0;i<n;i++){
	scanf("%d",&A[i]);
	}
	printf("jishih x toog oruulna uu: ");
	scanf("%d",&x);
		for(int i=1;i<=n+1;i++){
		l=A[i];
		if(l==x){
		a=i+1;
		printf("%d ",a);}
	}
	if(a==0){
		printf("-1");
	}
}

