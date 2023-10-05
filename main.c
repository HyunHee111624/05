#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int num = 0;
  
  while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            num++;
        }
    }
f
  printf("The number of digit is %i\n", num);
        
  
  system("PAUSE");	
  return 0;
}
