#include<stdio.h>
#include<conio.h>
void main()
{
	int math,physics,chemistry,total,per;
	clrscr();
	printf("\n enter the maths marks:");
	scanf("%d",&math);

	printf("\n enter the physics marks:");
	scanf("%d",&physics);

	printf("\n enter the chemistry marks:");
	scanf("%d",&chemistry);

	total=math+physics+chemistry;
	printf("\n total: %d",total);

	per=total/3;
	printf("\n percentage: %d",per);
	getch();
}