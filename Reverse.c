#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a1[10],b1[10];
clrscr();
scanf("%s",&a1);
b1=strrev(a1);
printf("Reverse:%s",b1);
getch();
}
