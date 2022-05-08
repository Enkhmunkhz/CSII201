#include <stdio.h>
int main() {
	int a[50][100][100],m,k,n,i,j,dugaar=1;
	scanf("%d%d%d",&m,&k,&n);
	for(i=1;i<k;i++){
		for(j=1;j<=n;j++){
			for(k=1 ; k<=m ; k++ , dugaar++){
				a[i][j][k]=dugaar;
				printf("%d-r ortsnii %d-r dawhriin %d-r ail: %d toot\n",i,j,k,dugaar);
			}
		}
	}
	return 0;
}
