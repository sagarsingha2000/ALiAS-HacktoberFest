#include<conio.h>
#include<stdio.h>
void display(int*);
void main()
{clrscr();
int i=3,*x;
float j=1.5,*y;
char k='C',*z;
printf("value of i,j,k is %d,%f,%c\n",i,j,k);
x=&i;
y=&j;
z=&k;
printf("adress in x,y,z is %u,%u,%u\t\n",x,y,z);
y=y+2;
z=z+10;
x=x+1;
printf("new adress in x,y,z is %u,%u,%u\t",x,y,z);
getch();
}







