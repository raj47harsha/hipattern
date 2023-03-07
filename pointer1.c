#include<stdio.h>
int main(){
printf("Let us learn about pointers\n");
int a = 76;
int *ptra= &a;
printf("the address of pointer to a is %p\n",&ptra);
printf("the address of a is %p\n",*ptra);
printf("the address of a is %p\n",ptra);
printf("the value of a is %d\n",*ptra);
printf("the value of a is %d",a);

return 0;
}