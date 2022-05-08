#include<stdio.h>
int main() {
	float faran, celsius, f, i=0;
	scanf("%f",&faran);
	celsius=(faran-32)*5/9;
	while(i<=celsius){
		f=i*9/5+32;
		printf("%.f %.1f\n",i,f);
		i++;
	}
}
