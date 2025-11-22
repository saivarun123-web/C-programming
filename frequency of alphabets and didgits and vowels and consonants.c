#include <stdio.h>
int main()
{
    int i,lower=0,upper=0,second=0,special=0,vowels=0,c=0;
    char s[100];
    scanf("%s",&s[i]);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            switch(s[i])
            {
            case'a':
            case'A':
            case'e':
            case'E':
            case'i':
            case'I':
            case'o':
            case'u':
            case'O':
            case'U':vowels++;
            break;
            default:c++;
            }
        
            if(s[i]>='a'&&s[i]<='z')
            
            lower++;
            else 
            upper++;
        }
    else if(s[i]>='0'&&s[i]<='9')
    second++;
    else
    
    special++;
            
    }
    printf("%d\t%d\t%d\t%d\t%d\t%d\t",lower,upper,second,special,vowels,c);
    return 0;
    
}
