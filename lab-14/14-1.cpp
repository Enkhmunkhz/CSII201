#include <stdio.h>
int main(){
    int i, n, a[100], *ptr;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    ptr = a;
    for(i = 0; i < n; i++){
        printf("%d ", *ptr);
        ptr++;
    }
}
