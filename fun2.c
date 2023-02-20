#include<stdio.h>
void india(){
  printf("you are in India\n");
  england();
  return;
}
void england(){
  printf("you are in England\n");
  australiya();
  return;
}void australiya(){
  printf("you are in Australiya\n");
  return;
}
int main(){
    india();
    
return 0;
}