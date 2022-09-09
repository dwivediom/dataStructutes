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
    S = new int[size]; 

}
Stack :: ~Stack(){ 
    delete[] S ; 
}
void Stack :: push(int val ){ 
    
     if(top==size-1){ 
        cout<< "Stack overflow"; 
     }else{ 
      
        top++ ; 
       
       S[top]= val; 
          
     }

}

void Stack :: display(){ 
     cout<< "disply wroking "; 
    for (int i =0 ; i<size ; i++){ 
        cout<< S[i]; 
    }
}
int Stack :: pop(){ 
    int x =1 ; 
    if(top==-1 ){ 
        cout<< "stack is underflow "; 

    }else{ 
            x = S[top]; 
            top--; 
    }
    cout<< endl<< x << endl  ; 
    return x ; 
}
int Stack :: peek(int index ){ 
     if(index > size && index < 0 ){ 
        cout<< "invalid index "; 
     }
    int sindex = size-index + 1 ; 
    cout <<endl << S[sindex]<< endl ; 
    return S[sindex]; 
}
int main (){ 
     int size = 5 ; 
    Stack stk( size) ; 
    for(int i = 1 ; i<=size ; i++){ 
        stk.push(i);
    }
    stk.display(); 
    stk.pop();
    stk.peek(3); 
  return 0 ;  
}         