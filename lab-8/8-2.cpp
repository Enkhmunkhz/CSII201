#include<stdio.h>
#include<string.h>
int main(){
	int i=0,s=0;
	char x[100];
	gets(x);
	while(i<strlen(x)){
		switch(x[i]){
		case 'a':{
			s++;
			break;
		}
		case 'e':{
			s++;
			break;
		}
		case 'i':{
			s++;
			break;
		}
		case 'o':{
			s++;
			break;
		}
		case 'u':{
			s++;
			break;
		}
		case 'y':{
			s++;
			break;
		}
	}
	i++;
	}
	printf("%d",s);
}
