#include <stdio.h>
int main() 
{
	int m, n, k, A[100][100], B[100][100], C[100][100], i, j, s, z;
	puts("Hvsnegtiin hemjees");
	scanf("%d%d%d", &n, &m, &k);
	puts("A hvsnegt: ");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			printf("a%d%d: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	puts("B hvsnegt: ");
	for(i=0 ; i<m ; i++)
	{
		for(j=0 ; j<k ; j++)
		{
			printf("b%d%d: ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	puts("A*B:");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<k ; j++)
		{
			printf("c%d%d: ", i+1, j+1);
			for(z=0, s=0; z<m ; z++)
			{
				s=s+A[i][z]*B[z][j];
			}
			C[i][j]=s;
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
