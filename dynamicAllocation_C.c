#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p = malloc(sizeof(int));
  int *t = calloc(1000000000000,sizeof(int)); 
  if(p == NULL){
    printf("Failed to allocate p!");
    return -1;
  }
  if(t == NULL){ 
    printf("Failed to allocate t!");
    return -1;
  }

  *p = 5;
  *t = 6;
  printf("p: %d\n",*p);
  printf("t: %d\n",*t);
  free(p);
  free(t);
  return 0;
}
