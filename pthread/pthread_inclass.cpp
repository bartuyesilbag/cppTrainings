#include <stdio.h>
#include <pthread.h>

struct data{
  int a;
  int b;
};

class worker{
pthread_t myThread;

static void* doSomething(void* arg){
  data * tempData = (data*)arg;
  long toplam = tempData->a + tempData->b;
  pthread_exit((void*)toplam);
}

public:
  bool start(){
    data *newData = new data();
    newData->a = 5;
    newData->b = 6;

    if(pthread_create(&myThread,NULL,doSomething,(void*)newData)) {
      delete newData;
      return false;
    }
    return true;
  }

  void wait(){
    void* p_toplam;
    pthread_join(myThread,&p_toplam);
    mToplam = (long)p_toplam;
  }
  long mToplam;
};

int main(int argc, char const *argv[]) {
  worker w;
  w.start();
  w.wait();
  printf("Toplam : %lu \n",w.mToplam);
  return 0;
}
