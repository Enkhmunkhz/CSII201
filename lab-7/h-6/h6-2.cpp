#include <stdio.h>
int main()
{
	int a[100][100], n, i, j;
	scanf("%d", &n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(i+j+1<=n)
				a[i][j]=i+j+1;
			else 
				a[i][j]=2*n-(i+j+1);
		}
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
