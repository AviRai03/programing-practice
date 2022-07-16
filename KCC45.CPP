#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i=1,sum=0,n;
cout<<"enter the value of n";
cin>>n;
while(i<=n)
{
sum=sum+i;
i=i++;
}
cout<<sum;
getch ();
}