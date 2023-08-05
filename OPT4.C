
#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,sum;
	clrscr();
	printf("enter valu of x=");
	scanf("%i",&x);
	printf("enter valu of y=");
	scanf("%i",&y);
	sum=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	printf("z=%i",sum);

	getch();
}
