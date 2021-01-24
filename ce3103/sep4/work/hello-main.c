#include <stdio.h>
#include "hello.h"

int main(){
 char c, i;

while(1){
 i = fread(&c,1,1,stdin); 
 if (i>0){
 helloprint();
 printf("count = %d \n", counter());
   }
  }
 return 0;
}
