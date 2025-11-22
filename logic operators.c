#include<stdio.h>
int main(){
	int a,b;
	printf("enter th values of a,b:");
	scanf("%d%d",&a,&b);
	printf("%d\n",a&b);
	printf("%d\n",a^b);
	printf("%d\n",a|b);
	printf("%d\n",~a);
	printf("%d\n",~b);
}
