//program to find length of string without using strlen() function.

#include <stdio.h>
#define max 50

int main()
{
    int count,i=0;
    char word[max];
    
    printf("Hello World\n");
    printf("enter word: ");
    fgets(word,20,stdin);
    
    printf("word = %s\n",word);
    printf("word allocate size = %lu\n",sizeof(word));

    // to find length of string 
    count = 0;
    while(word[i]!='\0')
    {
        count = count+1;
        i++;
    }
    printf("word correct size = %d\n",count);

    return 0;
}