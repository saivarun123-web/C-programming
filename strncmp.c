#include<stdio.h>
#include<string.h>
int main()
{
	int res;
	char s1[]="ABCD";
	char s2[]="ABCE";
	puts(s1);
	res=strncmp(s1,s2,3);
	puts(s1);
	if(res==0)
	printf("two strings are equal");
	else if(res<0)
	printf("%s is smaller than %s",s1,s2);
	else
	printf("%s is greater than %s",s1,s2);
	return 0;
}

