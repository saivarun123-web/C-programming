#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter the values of a,b:");
	scanf("%d%d%d",&a,&b,&ch);
	printf("enter your choice:");
	scanf("%c",&ch);
	switch(ch){
		case 1:
		c=a+b;
		printf("%d",c);
		break;
		case 2:
		c=a-b;
		printf("%d",c);
		break;
		case 3:
		c=a*b;
		printf("%d",c);
		break;
		case 4:
		if(b!=0){
		c=a/b;
		printf("%d",c);
		}	
		else{
			printf("infinity");
		}
		break;
	}
	
}
