#include <stdio.h>
#include <stdio.h>
int main() {
	int n, a[100],b[100], i, k, m, j;
	printf("A hvsnegt: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d",&a[i]);
	}
	printf("B hvsnegt: ");
	scanf("%d", &m);
	for(i=1; i<=m; i++){
		scanf("%d",&b[i]);
	}
	printf("ur dun:\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			if(a[i]==b[j])
			printf("[%d]=[%d]=%d ",i,j,a[i]);
		}
	}
	return 0;
}
