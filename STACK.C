#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int first(int x)
{
if(x==0)
 {
 exit(0);
 }
 printf("%d",x);
 x=x+1;
 first (x);
 return x;
}
void main()
{
 int z=5;
 printf("%d",first(z));
 getch();
}