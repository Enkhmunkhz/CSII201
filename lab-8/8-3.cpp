#include<stdio.h>
#include<string.h>
int main(){
	char a[20], b[20];
	int i,j,k=0;
	puts("ehnii ugiig bicne uu");
	scanf("%s",a);
	puts("2 dahi ugiig ugnu uu");
	scanf("%s",b);
	if(strlen(a)==strlen(b)){
		for(i=0;i<strlen(a);i++){
			if(a[i]==b[i]){
				k++;
			}
		
}
	if(strlen(a)==k) {printf("adilhan ug"); }
		else printf("2 uur ug bayrlalaa"); }
	else printf("2 uur ug bayrlalaa");
}
