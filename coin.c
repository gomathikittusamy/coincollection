#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i,sum,b,coin=0;
clrscr();
printf("NO of coins");
scanf("%d",&n);
printf("Value of coins ");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value of sum");
scanf("%d",&sum);
for(i=0;sum!=0;i++)
{
b=0;
b=sum/a[n];
if(b!=0)
printf("%d coin of %d rs\n",b,a[n]);
coin=coin+b;
sum=sum%a[n];
n--;
}
printf("Total coins is %d",coin);
getch();
}
