#include <stdio.h>

int main() {
	int n, a[100],b[100], i, m, c[100], k, j, l;
	printf("A hvsnegt:\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d",&a[i]);
	}
	printf("B hvsnegt:\n");
	scanf("%d", &m);
	for(i=1; i<=m; i++){
		scanf("%d",&b[i]);
	}
	printf("C hvsnegt:\n");
	for(i=1;i<=n;i++){
		c[i]=a[i];
	}
	k=n;
	for(j=1;j<=m;j++){
		for(i=1, l=0;i<=n;i++){
			if(b[j]==a[i])
				l++;
		}
		if(l==0){
			k++;
			c[k]=b[j];
		}
	}
	printf("%d\n",k);
	for(i=1; i<=k; i++)
		printf("%d ",c[i]);
	return 0;
}
