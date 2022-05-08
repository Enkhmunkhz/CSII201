#include<stdio.h>
int main()
{ 
  int a, b, i, x;
  printf("orolt: \n");
  scanf("%d%d", &a, &b);
  for(i=1;i<=b;i++){
  	if(a%i==0 && b%i==0)
  			x=i;
  }
  printf("garalt: \n%d",x);
}
