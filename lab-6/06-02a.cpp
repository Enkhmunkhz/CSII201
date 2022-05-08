#include<stdio.h>
#include<math.h>
int main(){
int n,l;
printf("orolt:\n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("garalt:\n");
for(int i=n-1;i>=0;i--){
l=a[i];
printf("%d ",l);
}
}
