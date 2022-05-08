#include <stdio.h>
int digit_sum(int);

int main()
{
	int i, n;
	scanf("%d",&n);
	printf("%d too hurtel tsiffruudiinhee niilbert huvaagdh too:\n",n);
	for(i = 1; i<=n; i++)	
	{
		if( i%digit_sum(i)==0)
			printf("%d ", i );	
	}
}
int digit_sum(int a)
{
	int n, s=0;
	while(a>0)
	{
		n = a % 10;
		s+=n;
		a/=10;
	}
	return s;
}
