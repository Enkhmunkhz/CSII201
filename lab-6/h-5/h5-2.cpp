#include <stdio.h>
int main(){
	int n,a[100][100],i,j,s,mur,bagana,diagonal1,diagonal2;
	scanf("%d",&n);
	s=n+1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){ // muriin niilber oloh
		printf("%d-r murnii niilber: ",i);
		mur=0;
		for(j=1;j<=n;j++){
			mur=mur+a[i][j];
		}
		printf("%d\n",mur);
	}
	
	for(j=1;j<=n;j++){ // baganii niilber oloh
		printf("%d-r baganii niilber: ",j);
		bagana=0;
		for(i=1;i<=n;i++){
			bagana=bagana+a[i][j];
		}
		printf("%d\n",bagana);
	}
	printf("1-r diagonaliin niilber: ");
	for(i=1, diagonal1=0;i<=n;i++){ // 1-r diagonal niilber
		diagonal1=diagonal1+a[i][s-i];
	}
	printf("%d\n",diagonal1);
	printf("2-r diagonaliin niilber: ");
	for(i=1, diagonal2=0;i<=n;i++){ // 2-r diagonal niilber
		diagonal2=diagonal2+a[s-i][i];
	}
	printf("%d\n",diagonal2);
}
