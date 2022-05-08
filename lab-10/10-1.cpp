#include <stdio.h>
#include <string.h>
int count(char s[]);
int main(){
    char a[1000];
    puts("Temdegt moriig oruulna uu");
    gets(a);
    printf("Egshgiin too: %d", count(a)); 
}
int count(char s[]){
    int i,l,countt=0;
    l = strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            countt++;
        }
    }
    return countt;
}
