#include <stdio.h>
void reverse(int *begin, int *end);
int size(int *b, int *e);
int main(){
	int a[7] = {3, 7, 1, 2, 4, 6, 5};
	int i;
    reverse(a, a + 7);
    for(i = 0; i < 7; i++)
        printf("%d ", a[i]);
    return 0;
    }
void reverse(int *begin, int *end){
    int b, e, i, r;
    r = size(begin, end);
    for(i = 0; i < r / 2; i++){
		--end;
		b = *begin;
	    *begin = *end;
	    *end = b;
	    begin++;
    }
}
int size(int *b, int *e){
	int r;
    r = e - b;
    return r;
}
