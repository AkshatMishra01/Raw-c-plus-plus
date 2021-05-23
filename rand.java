#include <stdio.h>
#include <stdlib.h&g;
int main(void){
   printf("Randomly generated numbers are: ");
   for(int i = 0; i<5; i++)
      printf(" %d ", rand());
   return 0;
}
