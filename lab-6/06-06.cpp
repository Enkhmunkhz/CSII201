#include <stdio.h>
int main() {
	int n,m,a[100][100],i,j,x,k=0;
	scanf("%d", &n);
	scanf("%d", &m);
	for(i=1;i<=m;i++){
		for(j=1;j<=n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&x);
	for(i=1;i<=m;i++){
		for(j=1;j<=n; j++){
			switch(a[i][j]==x){
				case 1: printf("a[%d][%d]",i,j);
				k++;
				break;
			}
		}
	}
	k==0 && printf("-1");
}
