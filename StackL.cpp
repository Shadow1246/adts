#include "StackL.h"

using namespace std;




void Stack::push(int k) {
   data.insert(k,1);
   return;
}

int Stack::size(){
   return data.size();
}



void Stack::clear(){
   data.clear();
}

void Stack::pop(){
   data.remove(1);
   return;
}

int Stack::top(){
   return data.get(1);
}
