#include <iostream> 
using namespace std ; 

struct Node { 
    int data ; 
    struct  Node *next ; 
}*firstNode=NULL , *lastnode =NULL; 

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


 void display(struct Node *p ){ 
        while (p!=NULL)
        {
            cout<< p->data<<" "; 
            p=p->next; 
        }
       cout<< endl; 
        
    }


 void InsertSortedLL(int value){ 
    struct Node *p ,*q, *newnode  ;   // p  and q are  pointing pointer
    p=firstNode ; 
    q=NULL ; 
    while (p && p->data < value)
    {
         q=p ;        // this is call followig pointer .. q follows p 
         p=p->next; 

    }

    newnode = new Node ; 
    newnode->data= value ; 
    newnode->next = p ; 
    q->next= newnode ; 

    
    
 }

 int checkSroted(struct Node *p ){ 
           int y = -3245;
           int postion=0; 
            while (p)
            { 
                    if(p->data<y){ 
                        cout << "not sorted "; 
                         return 0 ; 
                    }
                    y=p->data;
                    p=p->next; 


            }
            
            cout << "sorted "; 
            return 1 ; 
            
 }


int main(){ 
     int A[]={1,2,4,9,22}; 
     Create(A,5); 
     
     
    // InsertSortedLL(5);
     
    //  display(firstNode); 
    checkSroted(firstNode); 
    


 return 0 ; 
}
