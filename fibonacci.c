#include<stdio.h>
int main(){
int N,a=0,b=1,t;
scanf("%d",&N);
while(N!=0)
{
   if(a>=N)
    {t=a;
    break;}
if(b>=N)
  {t=b;
  break;}

a=a+b;
b=a+b;



}
if(t==N)
{printf("True");}
else
{printf("False");}
return 0;

}
