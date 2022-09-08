#include <iostream> 
using namespace std ; 

struct Node { 
    int data ; 
    struct Node *next ; // self refrential structure '

}*firstNode  , *firstNode2  , *third = NULL; 


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

}}

void createLL2( int A[], int size ){ 
struct Node *newNode , *lastNode ; 
firstNode2 = new Node ;         // creating first node 
firstNode2->data= A[0]; 
firstNode2->next= NULL; 
lastNode = firstNode2; 

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

void concatinateLL(struct Node *p , struct Node *q){ 
      while (p && p->next!=NULL)
      {
          p=p->next ; 

      }
      p->next = firstNode2; 
      
      
}
void merge (struct Node *p , struct Node *q ){

    struct Node *last ;
    if(p->data<q->data){ 
        last = third = p ; 
        p=p->next ; 
        third->next =NULL ; 

    } else{ 
        last = third = q ; 
        q=q->next ; 
        third->next = NULL ; 

    }

    while (p&& q ){ 

        if(p->data< q->data){ 
            last->next= p ; 
            last= p ; 
            p=p->next ; 
            last->next= NULL; 
        }else{ 
            last->next =q ;
            last = q ; 
            q=q->next ;
            last->next=NULL ; 

        }
        if(q){
            last->next= q ; 
        }
        if(p){
            last->next=p ; 
        }
    }

}
int main (){ 
    int A[]={1,3,4,5,10}; 
    int B[]={2,6,8,9,11}; 
    createLL(A,5); 
    createLL2(B,5); 
    // concatinateLL(firstNode,firstNode2); 
     merge(firstNode,firstNode2); 
    display(third); 


}