#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,area;
	clrscr();
	printf("\n enter the length value:");
	scanf("%d",&l);
	printf("\n enter the width value:");
	scanf("%d",&b);
	area=l*b;
	printf("\n area of circle: %d",area);
	getch();
}