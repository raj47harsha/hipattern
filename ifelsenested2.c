#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{for (int j = 1; j <= n; j++)
{if (j==1||i==n||i==j)
{
   printf("X");
}
else
printf(" ");
  
}

  printf("\n");
}

return 0;
}