#include<stdio.h>
#include<math.h>
int max(int a[], int n){
	int i,maxx;
	maxx=a[0];
	for(i=1;i<n;i++){
		if(maxx<a[i])
			maxx=a[i];
			}
			return maxx;
}
int main(){
	int n,i,j,m; 
	puts("husnegtuudiin hemjeeg ugnu uu:");
	scanf("%d%d",&n, &m);
	
	if(n > 0 && m > 0){
	int a[n];
	puts("a husnegtiin elementuudiig ugnu uu:");
		for(i=0; i<n; i++)
		{
			scanf("%d",&a[i]);		
		}	
	int b[m];
	puts("b husnegtiin elementuudiig ugnu uu:");
		for(j=0; j<m; j++){
			scanf("%d",&b[j]);		
		}	
			puts("2 husnegtend bui hamgiin ih element bol");
		if(max(b, m) > max(a, n)){
			printf("%d",max(b, m));
		}
		else {
			printf("%d", max(a, n));
		}
	} else printf("zuv utga ugnu uu");
	return 0;
}
