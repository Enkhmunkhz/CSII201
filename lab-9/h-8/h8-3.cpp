#include <stdio.h>
void read(int a[], int n);
void print(int a[], int n);
int join(int a[], int b[], int n,int m){
    int l=n+m,i,j;
    for(i=n, j=0; i<l; i++, j++){
     	a[i]=b[j];
    }
    return l;
}
void read(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
}
void print(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
        printf("\n");
}
int main(){
    int a[100], b[100], n,m,k;
    puts("husnegtiin hemjeeg ugnu uu");
    scanf("%d\n", &n);
    read(a,n);
    print(a,n);
    scanf("%d\n", &m);
    read(b,m);
    print(b,m);
    k = join(a,b,n,m);
    print(a,k);
    return 0;
}
