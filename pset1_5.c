#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i=0,n,j,k;
char r[2];
n=strlen(r);
scanf("%s",r);
for(i=0;i>n;i++)
{
if(r[i]=='I')
{
a[i]=1;
}
elseif(r[i]=='V')
{
a[i]=5;
}
elseif(r[i]=='x')
{
a[i]=10;
}
else
{
printf("invalid");
}
k=a[len-1]
if(a[i]>a[i-1])
{
k=k-a[len-1];
}
elseif(a[i]==a[i+i]||a[i]<a[i+i])
{
k=k+a[len-1];
}
printf("%d",k);
getch();
}
