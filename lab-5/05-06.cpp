#include<stdio.h>
int main()
{
	int i,j,k=0;
	printf("n=");
	scanf("%d",&i);
//	do
//	{  
//	j = i % 10;
//	k = k+ j;
//	i = i /10;
//	
//	 
//	}while(i>0);
     while(i>0){
			j=i%10;
			k=k+j;
			i=i/10;
			}
	printf("%d",k);
}
