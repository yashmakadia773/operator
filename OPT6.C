
#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z,sum;
	clrscr();
	printf("enter valu of x=");
	scanf("%i",&x);
	printf("enter valu of y=");
	scanf("%i",&y);
	printf("enter valu of z=");
	scanf("%i",&z);
	sum=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+z)*(y+z)*(z+x));
	printf("value=%d",sum);
	getch();
}
