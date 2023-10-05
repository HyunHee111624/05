#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int a;
  
  printf("정수를 하나 입력하세요 : ");
  scanf("%d", &a);
  
  if ( a < 0 )
   printf("절대값은 %d입니다.", -a);
  else  
   printf("절대값은 %d입니다.", a);  
  
  system("PAUSE");	
  return 0;
}
