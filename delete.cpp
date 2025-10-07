#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
  int a[5];
  int n=0,i;
     printf("Enter 5 ints\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  cout<<"Enter Position TO Delete"<<endl;
  cin>>n;
  for(i=n;i<4;i++)
  a[i]=a[i+1];
  cout<<"One Element Deleted"<<endl;
  a[4]=NULL;
  for(i=0;i<5;i++)
  printf("\n%d",a[i]);
  getch();

}
