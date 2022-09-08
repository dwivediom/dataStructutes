#include <iostream> 
#include "DisplayCLL.h"
using namespace std; 


void InsertCLL( struct Node *p ,  int position , int element ){ 
      struct Node *newNode ,*q; 
        newNode = new Node ; 
         newNode->data= element;
         newNode->next= NULL; 
 
          p=firstNode ; 

     if(position==0){ 
          q=firstNode; 
          
          while (p->next!=firstNode)
          {
            p=p->next; 
          }
          
        
        p->next= newNode ;
        newNode->next = firstNode; 
        firstNode =newNode ; 
        p=firstNode; 
       

              
     }else{ 
         p=firstNode ;
         for(int i=1 ; i<=position ; i++){ 
             q=p;
             p=p->next; 


       }
       q->next= newNode ; 
       newNode->next = p; 
          
     }


  
       
} 
 void DeleteCLL(struct Node *p , int position ){ 
            struct Node *q; 
            for(int i = 1 ; i<=position ; i++){ 
                q=p ; 
                p=p->next ;  
            }
            int x = p->data ; 
            q->next=p->next ; 
            delete p ; 
   }    
int main (){ 

    int A[] = {1,4,5,6,7,8};
    int size =sizeof(A)/sizeof(A[0]); 
 
    createCLL(A , size );
    InsertCLL(firstNode,3 ,17);
    
    displayCLL(firstNode); 
    cout<<endl; 
    DeleteCLL(firstNode , 3); 
    displayCLL(firstNode); 


    return 0 ; 
}