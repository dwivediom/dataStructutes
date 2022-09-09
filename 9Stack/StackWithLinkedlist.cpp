#include <iostream> 

using namespace std ; 
class Node 
{
public: 
int data ; 
Node * next ; 

Node(){ 
    data= 0 ; 
    next= NULL ; 

}

} ; 
class Stack { 
    Node *top; 
    public : 
    Stack(){ 
        top =NULL ; 
    }

    int acesstop(){ 
        cout<<top->data<< endl ; 
        return top->data; 
    }; 
    void push(int val ); 
    int pop(); 
    void display(); 
    int peek(int postion); 

}; 
 
 void Stack:: push(int val ){ 

      Node * newnode ;
      newnode= new Node() ; 
if(newnode == NULL ){                       // when stack is full and unable to create new node ; 
    cout<< endl<< "stack overflow "; 

}
      newnode->data= val ;
      
      newnode->next= top ; 
      top= newnode ; 
 }
 void Stack:: display(){ 
       Node * p ; 
       p=top ; 
        while(p!=NULL){ 
            cout<< p->data<< " "; 
            p=p->next; 
        }
        cout << endl ; 
 }
 int Stack:: pop(){ 
    Node * p ; 
    int x = 0  ; 
    if (top==NULL){ 
        cout<< " stack is empty"; 
        return x ; 

    }else{ 
        p=top ; 
        top=top->next; 
        x = p->data; 
        delete p ; 
        return x ; 

    }
    return x ; 
 }
 int Stack ::    peek(int postion){ 
    Node *p ; 
    p=top ; 
    for(int i=1 ; p!=NULL &&  i<=postion -1; i++){ 
        p=p->next; 
    }
     if(p!=NULL){
 cout <<  p->data<< endl; 
    return p->data; 
     }
   return -1; 
 }

 int main (){ 
    Stack stk; 
    stk.push(32); 
     stk.push(33);
      stk.push(36);
    stk.display(); 
   stk.peek(2); 
    return 0 ; 
 } 