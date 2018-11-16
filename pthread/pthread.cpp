#include <stdio.h>
#include <pthread.h>

#define THREAD_NUM 5
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
void* doSomething(void* arg){
  int *i = (int*)arg;
  printf("HelloWorld %i \n",*i);
  return 0;
}

int main(int argc, char const *argv[]) {


    pthread_t myThreads[THREAD_NUM];
    for(int i = 0; i < THREAD_NUM; i++) {
      pthread_create(&myThreads[i],NULL,doSomething,&i);
    }

    for(int i = 0; i < THREAD_NUM; i++){
      pthread_join(myThreads[i],NULL);
    }

  return 0;
}
