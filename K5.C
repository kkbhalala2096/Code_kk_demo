#include<stdio.h>
#include<conio.h>
void main()
{
	int d,year,month,week,day;
	clrscr();
	printf("\n enter the days:");
	scanf("%d",&d);

	year=d/365;
	printf("\n year: %d",year);

	d=d-year*365;
	month=d/30;
	printf("\n month: %d",month);

	d=d-month*30;
	week=d/7;
	printf("\n week: %d",week);

	d=d-week*7;
	day=d;
	printf("\n days: %d",day);
	getch();
}