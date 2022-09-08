#include <iostream> 
#include "createAndDisplayLL.h"

using namespace std ; 

int isLoop(struct Node *p ){ 
    struct Node *q ; 
   q=p= firstNode  ;

    do {
       p= p->next  ; 
       q=q->next ; 

       if(q!=NULL){ 
          q=q->next; 
       }

    }while(p && q && p!=q); 
     
     if(p==q){ 
        cout<<" is loop" ; 
        return 1 ; 
     }else{ 
           cout<<" not loop" ; 
        return 0  ; 
     }
    

}
int main (){ 
    int A[]={1,3,4,5,10}; 
    
    createLL(A,5); 
    isLoop(firstNode); 
    return 0 ; 
}