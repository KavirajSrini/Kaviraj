#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
clrscr();
scanf("%s",&a);
b=strrev(a);
printf("Reverse of a string:%s",b);
getch();
}
