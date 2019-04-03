#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,i,j,flag,temp,count=0;
scanf("%d %d",&num1,&num2);
if(num2<2)
{
printf("no prime number upto %d",num2);
}
temp=num1;
if(num1%2==0)
{
num1++;
for(i=num1;i<=num2;i++)
{
flag=0
for(j=i;j<=i/2;j++)
if(i%j==0)
flag=0
else
flag=1
}
if(flag==0)
{
printf("%d",i
}
printf("number of prime numbers are %d%d%d",temp,count,num2);
}
getch();
}
