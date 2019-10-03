#include<stdio.h>
#include<conio.h>
void main()
{
  int n=15,m=30;
  int i,gcd;
  for(i=1;i<=n && i<=m;i++)
  {
    if(n%i==0 && m%i==0)
      gcd=i;
  }
  printf("%d",gcd);
  getch();
}
