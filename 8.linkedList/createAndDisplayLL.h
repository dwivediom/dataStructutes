#include <iostream> 
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

void recursiveDisplay(struct Node *p){ 
    if(p!= NULL ){ 
       
       
       recursiveDisplay(p->next);
       cout << p->data; 

    }
}

