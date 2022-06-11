#include<stdio.h>
#include<conio.h>
void main()
{
	float p=3.14,r,area;
	clrscr();
	printf("\n enter the radius value:");
	scanf("%f",&r);

	area=p*(r*r);
	printf("\n area of circle: %f",area);
	getch();
}