#include<stdio.h>
#include<conio.h>
void main()
{
char str1[30],str2[30];
int n1,n2,count=0;
printf("str1,str2);
scanf("%s,%s",str1,str2);
n1=strlen(str1);
n2=strlen(str2);
if(n1==n2)
{
for(i=0;i<n1;i++)
{
if(str1[i]==str2[i])
{
count=count+0;
}
else
{
count=count+1;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf(no");
}
}
else
{
printf("no");
}
getch();
}
