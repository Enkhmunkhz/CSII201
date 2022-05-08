#include<stdio.h>
#include<math.h>
int main(){
	int n, m, k, l, s;
	n<=1;
	m<100;
	printf("A B husnegtiin hemjeeg ugnu uu: ");
	scanf("%d%d",&n,&m);
	int A[n], B[m];
	printf("A husnegt deh elementuudig ugnu uu: ");
	for(int i=0;i<n;i++){
	scanf("%d",&A[i]);
	} 
	printf("B husnegt deh elementuudig ugnu uu: ");
	for(int j=0;j<m;j++){
	scanf("%d",&B[j]);
	}
	k=n+m; 
	int C[k],i=0,j=0;
	while(i<n){
		C[k]=A[i];
		i++;
		printf("%d ",C[k]);
	}
	while(j<m){
		C[k]=B[j];
		j++;
		printf("%d ",C[k]);
	}
}
