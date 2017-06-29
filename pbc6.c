#include<stdio.h>
#include<conio.h>
void main()
{
chat string[20];
int i,count=0,c;
clrscr();
printf("enter the string");
gets(string);
for(i=0;string[i]!='\0';i++)
{
count++;
}
printf("%d",count);
getch();
}
