#include<stdio.h>
void main(){
   int choice=214324;
   clrscr();
    switch(choice){
     case 1:
     case 2:
     case 3:{
	printf("normal");
	break;
     }
     case 4:{
	printf("notbad");
     }
     case 5:{
	printf("serious");
     }
     default:{
	printf("Invalid Input");
     }
    }
}