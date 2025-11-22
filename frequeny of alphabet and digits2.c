#include <stdio.h>
int main()
{
    int i,lower=0,upper=0,second=0,special=0;
    char s[100];
    scanf("%s",&s[i]);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]>='a'&&s[i]<='z')
      lower++;
      else if(s[i]>='A'&&s[i]<='Z')
      upper++;
      else if(s[i]>='0'&&s[i]<='9')
      second++;
      else
      special++;
    }
    printf("%d\t%d\t%d\t%d",lower,upper,second,special);
    return 0;
}

