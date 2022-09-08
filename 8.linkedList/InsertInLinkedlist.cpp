#include <iostream> 
using namespace std ; 

struct Node { 
    int data ; 
    struct  Node *next ; 
}*firstNode  , *lastnode =NULL; 
void Create(int A[], int size ){ 
       struct Node *newNode ; 
       firstNode = new Node ; 
       firstNode->data= A[0]; 
       firstNode->next= NULL ; 
       lastnode= firstNode ; 


       for(int i=1 ; i<size ; i++){ 
        newNode  = new Node ; 
        newNode->data=A[i]; 
        newNode->next=NULL; 
         lastnode->next=newNode ; 
         lastnode= newNode  ; 

       }
}

void insert (int value ,int position   ){ 
     struct Node *t , *p ; 
      if (position == 0 ){ 
         t = new Node  ; 
         t->data= value ; 
         t->next= firstNode; 
         firstNode =t ; 

      }else { 
        t = new Node ; 
         p=firstNode; 
         
         for(int i=0 ; i<position-1 && p ; i++){ 
              p=p->next;
         }
         if(p){
         t->data= value ; 
         t->next= p->next; 
         p->next= t ;  

         }
      }  
}


void insertlast(int value){ 
      struct Node *newNode ; 
      newNode =new Node ; 
      newNode->data= value ; 
      newNode->next=NULL;
      if(firstNode==NULL){ 
             firstNode= lastnode= newNode; 
      }else{ 
        lastnode->next=newNode; 
        lastnode= newNode;          // this is for pointers 
      }

}


 void display(struct Node *p ){ 
        while (p!=NULL)
        {
            cout<< p->data<<" "; 
            p=p->next; 
        }
       cout<< endl; 
        
    }

int main(){ 
     int A[]={1,4,3,2,9}; 
     Create(A,5); 
     
     
    
     insertlast(23); 
     display(firstNode); 
    


 return 0 ; 
}