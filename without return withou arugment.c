#include<stdio.h>
void add();
void add()
{
	int a,b,sum;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d\n",sum);
}
  int main()
  {
  	add();
  	return 0;
  }
