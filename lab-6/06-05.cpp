#include<stdio.h>
#include<math.h>
int main(){
	int n,k=0;
	1<=n<100;
	scanf("%d",&n);
	int A[n];
	for(int i=0; i<n; i++){
	scanf("%d",&A[i]);}
	for(int i=0;i<n;i++){
	if(A[i]<=A[i+1]) k++;	
	}
	if(k==n-1){printf("usuh erembeer");}
	else {
	k=0;
	for(int i=0;i<n-1;i++){
	if(A[i]>=A[i+1]) k++;
	}
	if(k==n-1){printf("buurah erembeer");}
	else printf("erembelegdeegui");
}
}
