#include <iostream> 
#include <math.h>
using namespace std ;
struct Node { 
    int data ; 
    struct Node *next ; // self refrential structure '

}*firstNode  = NULL; 


void createLL( int A[], int size ){ 
struct Node *newNode , *lastNode ; 
firstNode = new Node ;         // creating first node 
firstNode->data= A[0]; 
firstNode->next= NULL; 
lastNode = firstNode; 

for(int i= 1; i<size; i++){ 
    newNode = new Node ; 
    newNode->data=A[i];
    newNode->next= NULL ; 
    lastNode ->next = newNode; 
    lastNode = newNode ;  

}
}
void display (struct Node *p){

while(p!=NULL){ 
    cout<< p->data<< " ";  
    p=p->next; 

}
}

void findMiddle(struct Node *p ){ 

      int length =0 ; 
      while(p){ 
       length ++ ; 
       p=p->next ; 

      }
      

      p=firstNode;
      int val = floor(length/2);
      for(int i=1; i<=val ; i++){ 
          p=p->next; 
      }
      cout<<p->data; 

}

int findMiddle2(struct Node *p){ 
  struct Node *q ;
       p=q=firstNode ;
       
     while(p->next!=NULL){ 
        p=p->next; 
        p=p->next; 
        q=q->next ; 
         
     }
     cout<< q->data; 
     return 0 ; 
}


int main(){ 
     int A[]={1,3,4,5,6}; 
     createLL(A,5); 
     // display(firstNode); 
     findMiddle2(firstNode); 
     return 0 ;      
}