#include<stdio.h>
int main()
{   int s, mur1=0,bagana1=0,t=1;
	scanf("%d",&s);
	int A[s][s],mur2=s-1,bagana2=s-1;
    while(t<=s*s)
    {
        for(int i=bagana1;i<=bagana2;i++)
        {A[mur1][i]=t++;}
        for(int j=mur1+1;j<=mur2;j++)
          {A[j][bagana2]=t++;}
        for(int i=bagana2-1;i>=bagana1;i--)
        {
            A[mur2][i]=t++;
        }
        for(int j=mur2-1;j>=mur1+1;j--)
        {
            A[j][bagana1]=t++;
        }
        mur1++;mur2--;bagana1++;bagana2--;
    }
   for(int i=0; i<10; i++)
    {
      for(int j=0;j<10;j++)
      {
         printf("%d \t", A[i][j]);
      }
            printf("\n");
         }
   return 0;
}
