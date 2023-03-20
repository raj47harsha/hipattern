#include<stdio.h>
int main(){
int a=50;
int *fax=&a;
printf("address of a is %p\n",*fax);
printf("the address of pointer to a is %p\n",&fax);
printf("the address of a is %p\n",a);
printf("the address of a is %p\n",&a);
return 0;
}