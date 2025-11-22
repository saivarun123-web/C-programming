#include <stdio.h>
int main()
{
  char name[10];
  int l=0,i;
  puts("enter your name");
  gets(name);
  for(i=0;name[i]!='\0';i++)
  l++;
  printf("length of your name is %d",l);
  return 0;


}
