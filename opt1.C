#include<stdio.h>
#include<conio.h>

main()
{

	float x,y,sum;
	clrscr();
	printf("enter valu of x=");
	scanf("%f",&x);
	printf("enter valu of y=");
	scanf("%f",&y);
	sum=(x*x)+(2*x*y)+(y*y);
	printf("z=%.2f",sum);

	getch();
}