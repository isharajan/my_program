// to compare two strings
#include<stdio.h>

int length(char *s)
{
    int i=0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

void main()
{
    int flag,str1l,str2l,i=0;
    char str1[20];
    char str2[20];

    printf("enter string 1 :");
    fgets(str1, 20, stdin);
    printf("enter string 2 :");
    fgets(str2, 20, stdin);
    
    str1l = length(str1);
    str2l = length(str2);
    printf("str1 len = %d\n",str1l);
    printf("str2 len = %d\n",str2l);

    if(str1l == str2l)
    {   printf("str1  = %s\n",str1);
        printf("str2  = %s\n",str2);
        while(str1[i] != '\0' && str2[i]!= '\0')

        {   
            if(str1[i] == str2[i])
            {
                i++;
            }
            else
            {   
                printf("diffrent word\n");
                flag =1;
                break;
            }
        }
        if(str1[i] == '\0' && str2[i] == '\0')
        {
            printf("same word\n");
        }
        

        
    } 
    else
    {
        printf("diffrent word\n");
    }
    

}

