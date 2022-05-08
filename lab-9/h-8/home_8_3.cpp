#include <stdio.h>

void read(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
}
void print(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	printf(" %d ",a[i]);
	printf("\n");
}
int join(int a[], int b[], int n, int m)
{
	int k,i,j;
	k=n+m;
	for(i=n,j=0; i<k;i++, j++)
			a[i]=b[j];
}
int main()
{
	int a[100], b[100], n, m;
	printf(" A husnegt heden elementtei ve?\n");
	scanf("%d", &n);
	printf(" A husnegtiin elementuudiig oruulna uu?\n");
	read(a,n);
	printf(" A husnegtiin elementuud:\n");
	print(a,n);
	printf("\n B husnegt heden elementtei ve?\n");
	scanf("%d",&m);
	printf(" B husnegtiin elementuudiig oruulna uu?\n");
	read(b,m);
	printf(" B husnegtiin elementuud:\n");
	print(b,m);
	printf(" A + B  husnegt : \n");
	int k = join(a,b,n,m);
	print(a,k);
	return 0;
}
