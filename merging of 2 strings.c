#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="hello";
	char s2[10]="world";
	puts(s1);
	strcpy(s1,s2);
	puts(s1);
	return 0;
	
}
