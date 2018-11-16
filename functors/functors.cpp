#include <vector>
#include "functors.h"

using namespace std;

void doJob(vector<baseClass*> v){
  for(vector<baseClass*>::iterator it = v.begin(); it != v.end(); it++){
    (*(*it))();
  }
}

int main(){
  vector<baseClass*> v;

    childA a1;
    childB b1;
    childA a2;
    childB b2;
    childA a3;
    childB b3;

    v.push_back(&a1);
    v.push_back(&b1);
    v.push_back(&a2);
    v.push_back(&b2);
    v.push_back(&a3);
    v.push_back(&b3);

    doJob(v);
    return 0;
}
