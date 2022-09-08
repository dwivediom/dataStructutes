#include <iostream> 
#include "createAndDisplayLL.h"
using namespace std ; 

void reverseLLelement(struct Node *p){ 
    int count =0 ; 
    int i = 0 ; 
     
    while (p)
    {
       count++ ;  
      p= p->next; 
    }

    cout<< count <<endl; 
    p=firstNode; 
    int *arr = new int[count]; 
    while(p!=NULL){ 
       

        arr[i]=p->data; 
        p=p->next; 
        i++; 
        
    } 
    
    p=firstNode;
        i=i-1; 
        while(p){ 
            p->data=arr[i--]; 
           p= p->next; 
        }

    
}

void reverseLLByLinks(struct Node *p ){    // reverseing linked list by changeing ilnks 
    struct Node *q , *r ; 
    q=NULL; 
    r=NULL; 
    // p=firstNode; 
    while(p!=NULL){ 
        q=r; 
        r=p;
        p=p->next; 
        r->next=q ; 
        
    
    }
    firstNode= r ; 

}
void RreverseLL(struct Node *q  , struct Node *p ){ 
    if(p!=NULL){ 
        RreverseLL(p, p->next); 
        p->next = q ; 
                 
    }else { 
        q =firstNode ; 
    }
}

int main (){ 

    int A[]={1,2,3,4,5}; 
    createLL(A , 5); 
    // reverseLLelement(firstNode); 
    reverseLLByLinks(firstNode);
    display(firstNode);
    

    return 0 ; 
}

