#include <pthread.h>
#include <stdio.h>

void * do_work(void* arg){
  printf("helloWorld!\n");
}

int main(){
  pthread_t th_1;

  pthread_create(&th_1,NULL,do_work,(void*)NULL);

  pthread_join(th_1,NULL);

  printf("Main Thread!\n");

  return 0;
}
