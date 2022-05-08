#include<stdio.h>
#include<math.h>
main(){
	int n,i,k=0,j,a,b;
	scanf("%d",&n);
	a=n%2;
	if(a==1){
		printf("sondgoi\n");
		while(i>0){
			j=i%10;
			k=k+j;
			i=i/10;}
			if (k%3==0){printf("ug too 3t huvaagdana.");}
			else {printf("ug too 3t huvaagdahgui.");}}
	else {printf("tegsh too\n");
	b=n%100;
	if(b==0){printf("ug too 4t huvaagdana");}
	else printf(" ug too 4t huvaagdahgui");}	
		}
