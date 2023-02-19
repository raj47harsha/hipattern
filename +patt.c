#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);// n number is odd
for (int i = 1; i <= n; i++)
{for (int j = 1; j <= n; j++)
{if (i==(n/2)+1||j==(n/2)+1)
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