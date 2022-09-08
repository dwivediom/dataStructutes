#include <iostream>
using namespace std ; 

class Stack { 
    private : 
     int size ; 
     int top ; 
     int *S ; 
    public: 
      Stack(int size); 
      ~Stack();
      void push(int val ); 
      int pop( ); 
      int peek( int index ); 
      int isFull(); 
      int isEmpty(); 
      void display(); 
      int stackTop();
       
}; 
Stack:: Stack(int size){ 
    this->size = size ; 
    top= -1; 
    int *S = new int[size]; 

}
Stack :: ~Stack(){ 
    delete[] S ; 
}
void Stack :: push(int val ){ 
     if(top==this->size-1){ 
        cout<< "Stack overflow"; 
     }else{ 
        top++ ; 
        S[top]= val; 
     }

}

void Stack :: display(){ 
    for (int i =0 ; i<size ; i++){ 
        cout<< S[i]; 
    }
}

int main (){ 
    
}