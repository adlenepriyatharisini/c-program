#include<stdio.h>
#include<conio.h>
main()
{
 int year,rem;
 printf("enter the year");
 scanf("%d",&year);
 rem=year%4;
 if(rem==0)
 printf("yes");
 else
 printf("no");
 return 0;
 }
