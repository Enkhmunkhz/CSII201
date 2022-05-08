#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void read_2darray(int a[][100], int n, int m)
{
	int i, j;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d",&a[i][j]);
}
void print_2darray(int a[][100], int n, int m)
{
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d ", a[i][j]);
			printf("\n");}
}
void min(int a[][100], int n, int m, int row[], int col[])
{
	int mur, bagana, i, j;
	for(i=0; i<n; i++){
		mur=a[i][0];
		for(j=0; j<m; j++){
			if(mur>a[i][j])
				mur=a[i][j];
		}	
		row[i] = mur;
	}
	for(j=0; j<m; j++){
		bagana = a[0][j];
		for(i=0; i<i; i++){
			if(bagana>a[i][j])
				bagana = a[i][j];
		}	
		col[j] = bagana;
	}
}
int main(){
	int c_row, c_col, i;
	int a[100], b[100];
	int c[100][100];
	printf("husnegtiin mor, baganiin toog oruul: \n");
	scanf("%d%d", &c_row, &c_col);
	read_2darray(c,c_row, c_col);
	print_2darray(c,c_row, c_col);
	min(c,c_row, c_col, a, b);
	printf("mur buriin hamgiin baga: \n");
	for (i=0; i<c_row; i++){
		printf("%d-r murnii hamgiin baga: %d\n", i+1, a[i]);
	}
		min(c,c_row, c_col, a, b);
	printf("bagana buriin hamgiin baga: ");
	for (i=0; i<c_row; i++){
		printf("%d-r baganiin hamgiin baga: %d\n", i+1, b[i]);
	return 0;
	}
}

