#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


struct thread_data{
  int a;
  int b;
};

class worker{
  pthread_t thread;

  static void* do_work(void* arg){
    struct thread_data* input = (struct thread_data*)arg;
    printf("toplam : %d \n",input->a + input->b);
    long toplam = input->a + input->b;
    pthread_exit((void*)toplam);
  }
public:
  bool start(){
      struct thread_data* data = new struct thread_data;
      data->a = 5;
      data->b = 12;

      int rc = pthread_create(&thread,NULL,do_work,(void*)data);
      if(rc){
        delete data;
        return false;
      }
      return true;
  }
  void wait(){
    void* toplam;
    pthread_join(thread,&toplam);
    long sonuc = (long)toplam;
    printf("Sonuc : %ld \n",sonuc);
  }
};

int main(int argc, char const *argv[]) {
  worker w;
  w.start();
  w.wait();
  return 0;
}
