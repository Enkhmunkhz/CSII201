#include <stdio.h>
struct Date
{
    int d,m,y;
};

struct Date dt[100];
typedef struct Date Date;
void read(Date dt[], int n);
void print(Date dt[], int n);
void sort(Date dt[], int n);
int less(Date a, Date b);
int main(){
    int n;
    scanf("%d", &n); 
    read(dt,n);
    sort(dt,n);
    print(dt,n);
}

void read(Date dt[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("On/Sar/Odor daraallaar oruulna uu\n");
        scanf("%d%d%d", &dt[i].y, &dt[i].m, &dt[i].d);
        } 
}
void print(Date dt[], int n){
    int i;
    for(i=0;i<n;i++){
        if(dt[i].d < 1 || dt[i].d > 31 || dt[i].m < 1 || dt[i].m > 12)
	        printf("Aldaatai utga baina\n"); 
	    else if(dt[i].d < 10 && dt[i].m < 10)
	        printf("%d/0%d/0%d\n", dt[i].y,dt[i].m,dt[i].d);
	    else if (dt[i].m < 10)
	        printf("%d/0%d/%d\n", dt[i].y,dt[i].m,dt[i].d);
	    else  if(dt[i].d < 10)
	        printf("%d/%d/0%d\n", dt[i].y,dt[i].m,dt[i].d);
    }
}
int less(Date a, Date b){
    if(b.y - a.y < 0)
        return 0;
    else if(b.m - a.m < 0)
        return 0;
    else if(b.d - a.d < 0)
        return 0;
    return 1;
}
void sort(Date a[], int n){
    int i,j,k;
    struct Date tmp;
    for(i=0; i<n;i++){
        k=i;
        for(j= i+1;j<n;j++){
            if(less(a[k],a[j])==0){
                k=j;
            }
        }
        tmp=a[k];
        a[k]=a[i];
        a[i]=tmp;
    }
}
