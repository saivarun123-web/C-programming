#include <stdio.h>

int main() 
{
	
    char str[] = "abc@#+1234xyz1029";
    int freq[10] = {0},i;
    for(i=0;str[i]!='\0';i++)
	 {
        if (str[i] >='0'&&str[i]<= '9') 
		{
            freq[str[i] - '0']++;
        }
    }

    for(i = 0;i< 10;i++) 
	{
        printf("%d", freq[i]);
    }

    return 0;
}
