#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int a;
  
  printf("������ �ϳ� �Է��ϼ��� : ");
  scanf("%d", &a);
  
  if ( a < 0 )
   printf("���밪�� %d�Դϴ�.", -a);
  else  
   printf("���밪�� %d�Դϴ�.", a);  
  
  system("PAUSE");	
  return 0;
}
