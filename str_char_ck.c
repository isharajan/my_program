#include <stdio.h>
int main()
{   int i,j,k=0;
    int flag=0;
    char str[20];

    printf("enter string : ");
    fgets(str,20,stdin);
    //printf("enter schar to search : ");
    //fgets(c,1,stdin);
    //printf("%s",str);
    j=0;
    while(str[j] != '\0')
    {
        j++;
    }


    for(i=0; i<j; i++)
    {   
        if(str[i] == 'u')
        {   
            flag =1;
        }
    }


    if(flag == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }


}