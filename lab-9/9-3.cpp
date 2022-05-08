#include<stdio.h>
void read(int a[], int n);
void print(int a[], int n);
int main(){
	int a[5],b[3];
	read(a,5);
	print(a,5);
	printf("\n");
	read(b,3);
	print(b,3);
}
void read(int a[], int n)
{
	int i;
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
}
void print(int a[], int n){
	int i;
	for (i=0; i<n; i++)
	printf("%d ",a[i]);
}
