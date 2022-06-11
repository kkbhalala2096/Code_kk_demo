#include<stdio.h>
#include<conio.h>
void main()
{
	int h,b,area;
	clrscr();
	printf("\n enter the height value:");
	scanf("%d",&h);
	printf("\n enter the base value:");
	scanf("%d",&b);
	area=(h*b)/2;
	printf("\n area of triangle: %d",area);
	getch();
}