#include<stdio.h>
int main(){
	int on , sar, udur, jil, nas,t,s,o;
	char ovog[20], ner[20], ungu[20], hobby[50], chuluut[50];
	puts("Tanii ovog?");
	scanf("%s", ovog);
	puts("Tanii ner?");
	scanf("%s", ner);
	puts("Tanii tursun on, sar, udur");
	scanf("%d%d%d",&on,&sar,&udur);
	puts("Tanii durtai ungu?");
	scanf("%s", ungu);
	puts("Tanii hobby yu ve?");
	scanf("%s", hobby);
	puts("Chuluut tsagaaraa yu hiideg be?");
	scanf("%s", chuluut);
	t=udur;
	s=sar;
	o=on;
	if(t>28){s=s+1;}
	if(s>3){o=o+1;}
	nas=2022-o;	
	printf("%s ovogtoi %s ni %d-%d-%d udur tursun. Odoo %d nastai. Tuunii durtai ungu bol %s.\nTer chuluut tsagaaraa %s hiideg. Tuunii hobby bol %s.",
	ovog, ner, on,sar,udur,nas,ungu,chuluut,hobby);
	if(sar==3&&udur==28){printf("\n\nTURSUN UDRIIN MEND HURGEY");}
}
