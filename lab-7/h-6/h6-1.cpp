#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,s=0;
	scanf("%d%d",&n,&m);
	int a[m][n];
	for(int i=0; i<n; i++){
		s=i+1;
		for(int j=0; j<m; j++){
			printf("%d ",s);
		} 
		printf("\n");
	}
}
