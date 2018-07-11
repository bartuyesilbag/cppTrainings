#include <stdio.h>
#include <pthread.h>

struct data{
  int a;
  int b;
};

class worker{
pthread_t myThread;

void* doSomething(void* arg){

}

public:
  bool start(){
    worker *data = new data();
    data->a = 5;
    data->b = 6;

    if(!pthread_create(&myThread,NULL,doSomething,(void*)data)){
      delete data;
      return false;
    }
    return true;
  }

  void wait(){
    pthread_join(myThread,NULL);
  }

}

int main(int argc, char const *argv[]) {

  return 0;
}
