#include<stdio.h>
int main(){
	int i=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
