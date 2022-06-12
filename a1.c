#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	x=5;
	clrscr();
	if (x>5)
		x-=5;
	else if (x>=0)
		x+=00;
	else if (x)
		x+=5;
	else
		x-=5;
	printf("%d\n",x);
	getch();
	return 0;
}