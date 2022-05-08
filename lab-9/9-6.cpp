#include <stdio.h>
int A[100];
int prime_range(int, int);
int main()
{
	int a, b, i, count;
	scanf("%d%d", &a, &b);
	printf("niit %d shirheg anhnii too baina\nprime numbers:", prime_range(a, b));
	count = prime_range(a, b);
	for(i = 0; i < count; i++)
		printf("%d ", A[i]);	
}
int prime_range(int m, int n)
{
	int i, j, count, s;
	for(count = 0; m <= n; m++)
	{
		for(i = 2, s = 0; i < m ; i++)
		{
			if(m % i == 0)
				s++;
		}
		if(s == 0)
		{
			A[count] = m;
			count++;			
		}
	}
	return count;
}
