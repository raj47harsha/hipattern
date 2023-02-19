#include<stdio.h>
int main(){
int n;
printf("enter n value:");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{for (int j = 1; j <=n; j++)
{if (i==j||j==n-i+1)
{ printf("X");
  /* code */
}else printf(" ");

  /* code */
}
      printf("\n");
  /* code */
}

return 0;
}