#include<stdio.h>
#include<string.h>
void main()
{
    int n ;
    int pos =0;
    int arr[] = {0,0,0,0};
    int rem;
    char str1[100] = " ";
    char ones[10][256]   = {"one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten "};
    char tens[8][256]    = {"twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    char teens[9][256]   = {"eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    char hundred[1][256] = {"hundred "};
    char thousand[1][256]= {"thousand "};
   
    printf("enter the number : ");
    scanf("%d",&n); 
    printf("%d\n",n);
    while(n>9)
    {
        rem = n%10;
        arr[pos] = rem;
        pos++;
        n = n/10;
    }
    arr[pos] =n;



    /*printf("new array values\n");
    for(int i=0; i<4; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    */
    //printf("pos = %d",pos);
    
    if(pos == 3)
    {
        //printf("pos1 = %d" ,pos);
        //str1 + ones[arr[pos]-1] + "thousand";
        if(arr[pos] == 1)
        {
            strcat(str1,thousand[0]);
        }
        else
        {
            strcat(str1,ones[arr[pos]-1]);
            strcat(str1,thousand[0]);  
        }

       
       //printf("%s",str1);
       pos = pos -1;
       
    }
    
    if(pos==2)
    {
        if(arr[pos] != 0)
        {
            strcat(str1,ones[arr[pos]-1]);
            strcat(str1,hundred[0]);   
        }
        
        //printf("%s",str1);
        pos = pos-1;
        
    }
    
    if(pos==1)
    {
        if(arr[pos] != 0)
        {
          strcat(str1,tens[arr[pos]-2]);  
        }    
        
       // printf("%s",str1);
        pos = pos-1;
    }
    
    if(pos==0)
    {
        if(arr[0] != 0)
        {
           strcat(str1,ones[arr[pos]-1]); 
        }
        
    }

    printf("%s",str1);
    printf("\n");
}