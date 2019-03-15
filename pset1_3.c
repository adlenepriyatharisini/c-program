#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,sum=0;
scanf("%d",&n);
while(n!=0)
{
a=n%10;
n=n/10;
sum=sum*10+a;
}
print("%d",sum);
getch();
}
