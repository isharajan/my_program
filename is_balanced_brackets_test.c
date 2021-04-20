#include<stdio.h>

int isBalanced(char *string,int strsize)
{   int top =-1;
    int stack[100];
    for(int i=0; i<strsize-1; i++)
    {
        //printf("%c",string[i]);  
        
        if(string[i]=='{' || string[i]=='[' || string[i]=='(')
        {
            top = top+1;
            stack[top] = string[i];
           // printf("%c",stack[top]);
        }
        
        if(string[i]=='}' || string[i]==']' || string[i]==')')
        {
            if((stack[top] == '{' && string[i] == '}')||
              (stack[top] == '[' && string[i] == ']')||
              (stack[top] == '{' && string[i] == '}'))
              {
                  stack[top] = '\0';
                  top = top-1;
              }
              
            else
            {   
                //printf("i+1 = %d",i+1);
                return i+1;
            }
                    
        }
    }
    return top;   
}

void main()
{
    int i,top,res;
    int strsize;
    
    char string[] = "foo(bar)";
    strsize = sizeof(string)/sizeof(string[0]);
    //printf("%d",strsize);
    res = isBalanced(string,strsize);
    
    if (res == -1)
    {
        printf("success");
    }
    else
    {
        printf("%d\n",res);
    }
    
}