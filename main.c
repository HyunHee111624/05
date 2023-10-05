#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int answer = 32;
    int num;
    int trial = 0; 
    
    do
    {
        //1. input
        printf("Guess a number : ");
        scanf("%d", &num);
        
        //2. decision (low/high)
        if ( num > answer)
        {
             printf("low\n");
         }
         
        else if ( num < answer )
        {
             printf("high\n");
         }
        trial = trial + 1;
    }
    
    while( answer != num ); //3. loop condition : answer is equal to num??
    
    
    printf("congratulation trials : %d\n", trial);
    
    
  system("PAUSE");	
  return 0;
}
