#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], i, count;
	gets(a);
	for(i=0, count=0 ; i+1 < strlen(a); i++)
	{
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) && !((a[i+1]>=65 && a[i+1]<=90) || (a[i+1]>=97 && a[i+1]<=122)))
			count++;
	}
	printf("\n%d vgtei", count+1);
	return 0;
}
