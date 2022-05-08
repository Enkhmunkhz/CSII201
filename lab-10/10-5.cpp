#include <stdio.h>
#include <string.h>
int is_valid(char pwd[]);
int main(){
    char pwd[100];
    int l,r;
    gets(pwd);
    l=strlen(pwd);
    if (l<6){
    printf("6-s doosh urttai bna");}
    else 
    r=is_valid(pwd);
}
int is_valid(char pwd[]){
    int l,i,upper=0,num=0,sp=0,a=0;    
    l = strlen(pwd);
    for(i=0;i<l;i++){
        if(pwd[i] >='A' && pwd[i]<= 'Z')
            upper++;
    }
    if(upper==0){
        printf("Tom useg alga\n");
        a++;}
    for(i=0;i<l;i++){
        if(pwd[i] >='0' && pwd[i]<= '9')
            num++;
    }
    if(num < 3){
       printf("3-s deesh toonii number oruulna uu\n");
       a++;}
    for(i=0;i<l;i++){
        if(pwd[i] =='?' || pwd[i] == '!' || pwd[i] == '$'|| pwd[i] == '*'|| pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+' || pwd[i] == '#')
            sp++;
    }
    if(sp == 0){
        printf("Tusgai temdegt oruul");
        a++;}
    if (a==0){
	printf("Password is valid");}
	return 0;
}
