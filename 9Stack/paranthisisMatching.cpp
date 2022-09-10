#include <iostream> 
#include <string.h>
using namespace std ; 

class Stack { 
    public : 
     int size ; 
     int top ; 
     char *S; 


     Stack(int size ){
        this->size = size;  
        top=-1 ; 
        S= new char[this->size ]; 

     }
     ~Stack (){ 
        delete []S;
     }

     int isEmpty(); 
      void push ( char val ) ; 
      int pop (); 
}; 
int Stack :: isEmpty(){ 
    if(top==-1){ 
        return 1 ; 
    }
    return 0 ; 
}; 
void Stack :: push(char val ){ 
   if(top>= size ){ 
      cout<< " the stack overflow "; 

   }
   
    top++ ; 
    S[top]=val; 
    
}; 

int Stack::  pop(){ 
    if(top==-1){ 
       cout<< "stack is already empty"; 
       return 0; 
    }
    
    S[top]=0 ; 

    top--; 

    return 1 ; 
}

int isParanthisisMatched(string str){ 
    int strlen = str.length(); 
    Stack stk(strlen);
 
    for(int i=0 ; i<=strlen;i++){ 
        // cout<< str[i]; 
        if(str[i]=='('){
               cout<< endl<<str[i] <<endl; 
            stk.push('('); 

        }
        if(str[i]==')'){
              
            if(stk.isEmpty()){ 
                cout<< endl<<str[i] <<endl; 
                cout<< "invalid pranthisis"; 
                return 0 ; 
            }

            stk.pop(); 
        }
        
    } 
    if(stk.isEmpty()){ 
            cout<< " parnthisis is balence  "; 
            return 1 ; 
        }else{ 
            cout<< endl << " chek for extra ( "; 
        }
 return 0 ; 

}

int main (){ 
    string str = "some(hellow oms(everthing is working )) "; 
    isParanthisisMatched(str); 

return 0 ; 
}