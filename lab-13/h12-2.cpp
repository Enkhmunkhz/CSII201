#include <stdio.h>
int *search(int a[], int value, int size){
    int i;
    for(i=0; i<size; i++){
        if(a[i] == value)
            return &a[i];
    }
    return NULL;
}
void read(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}
void print(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
        printf("\n");
}
int main(){
    int a[100];
    int n, m;
    printf("husnegtiin hemjeeg oruulna uu\n");
    scanf("%d", &n);
    printf("husnegtiin elementuudiig ugnu uu\n");
    read(a, n);
    printf("husnegtees oloh toog ugnu uu\n");
    scanf("%d", &m);
    print(a, n);
    int *p;
    p = search(a, m, n);
    if(p==NULL)
        printf("Oldsongui\n");
    else 
        printf("%d too %ld-r bairlald oldloo\n", *p, p-a+1);
    return 0;
}
