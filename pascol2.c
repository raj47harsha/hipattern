#include<stdio.h>
int main(){
  int n ;
  printf("enter n:");
  scanf("%d",&n);
  for (int i = 0; i <=n; i++)
  {int first = 1;
    for (int j = 0; j <= i; j++)
    {   printf(" %d ",first);
        first = first * (i-j)/(j+1);
      /* code */
    }
        printf("\n");
    /* code */
  }
  
return 0;
}