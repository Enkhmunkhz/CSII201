#include <stdio.h>
int main()
{
	int a[100], n, i, s, j;
	puts("Heden hvvhedtei angi ve?");
	scanf("%d", &n);
	puts("Tus bvriin ondor hed ve?");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0,s=0;i<n;i++)
	{
		s=s+a[i];
	}
	float m=(float)s/n;
	for(j=0,i=0;i<n;i++)
	{
		a[i]>m && j++;
	}
	printf("Dundjaas undur niit %d hvvhed baina.", j);
}
