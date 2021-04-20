
//convert to uppercase and lowercase string
#include <stdio.h>
void main()
{
    char str[20];
    printf("enter uppercase string: ");
    fgets(str,20,stdin);
    for (int i =0; str[i] !=0; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] +32;
        }
    }
    printf("lowercase string : %s\n",str);


    printf("enter lowercase string: ");
    fgets(str,20,stdin);
    for (int i =0; str[i] !=0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] -32;
        }
    }
    printf("uppercase string : %s",str);

}