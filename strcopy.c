#include <stdio.h>
#define max 50

int main()
{
    int count,i=0;
    char word1[max];
    char word2[max];
    
    printf("Hello World\n");
    printf("enter word1: ");
    fgets(word1,20,stdin);
    
    printf("word1 = %s\n",word1);
    printf("word allocate size = %lu\n",sizeof(word1));
    count = 0;
    while(word1[i]!='\0')
    {
        count = count+1;
        i++;
    }
    printf("word correct size = %d\n",count);

    //to copy one to another string
    for(i =0; i<count; i++)
    {
        word2[i] = word1[i];
    }


    printf("\nword1 = %sword2 = %s\n",word1,word2);

    return 0;
}
