#include "StackLL.h"


#include <iostream>

using namespace std;
class Stack::Node{
   public:
      int data = 0;
      Node* next = nullptr;
};

Stack::~Stack(){
   while(num_elements>0)
      pop();
}

void Stack::push(int k){
   Node* iPtr = new Node{k};
   iPtr->next = frontPtr;
   frontPtr = iPtr;  
   num_elements++;
}

int Stack::size(){
   return num_elements;
}

void Stack::clear(){
   while(num_elements>0)
      pop();
}

void Stack::pop(){
   Node* iPtr = frontPtr;
   frontPtr = frontPtr->next;
   delete iPtr;
   num_elements--;
}

int Stack::top(){
   return frontPtr->data;
}
