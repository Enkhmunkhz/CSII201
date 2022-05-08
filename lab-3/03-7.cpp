#include<stdio.h>
#include<math.h>
main()
{
	int x;
	scanf("%d",&x);
	(x<10)&&printf("1orontoi")||
	(9<x)&&(x<100)&&printf("2orontoi")||
	(99<x&&x<1000)&&printf("3orontoi")||
	(999<x&&x<10000)&&printf("4orontoi")||
	(9999<x&&x<100000)&&printf("5orontoi")||
	(99999<x&&x<1000000)&&printf("6orontoi")||
	(999999<x&&x<10000000)&&printf("7orontoi")||
	(9999999<x&&x<100000000)&&printf("8orontoi")||
	(99999999<x&&x<1000000000)&&printf("9orontoi");
}
