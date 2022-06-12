#include <stdio.h>
#include <conio.h>
void main(int argc, char const *argv[])
{
	int i;
	float f;
	double d;
	char c;
	clrscr();
	printf("%lu\n",sizeof(i));
	printf("%lu\n",sizeof(f));
	printf("%lu\n",sizeof(d));
	printf("%lu\n",sizeof(c));
	getch();
}