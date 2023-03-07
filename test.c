#include<stdio.h>
int main(){
int row;
printf("enter row:");
scanf("%d",&row);
for (int i = 0; i < row; i++)
{for (int j = 0; j < row-i; j++)
{
  printf("%d",j);
}

  printf("\n");
}

return 0;
}