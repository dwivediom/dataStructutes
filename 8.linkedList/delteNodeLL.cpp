#include <iostream > 
using namespace std ; 

struct Node { 
    int data ; 
    struct Node *next ; 
}*firstnode=NULL ; 

void create(int A[] , int size ){ 
  struct Node *newnode , *lastnode ; 
   firstnode = new Node ; 
   firstnode->data=A[0]; 
   firstnode->next=NULL ; 
   lastnode = firstnode  ;


   for(int i = 1 ; i<size ; i++){ 
    newnode = new Node ; 
    newnode->data=A[i]; 
    newnode->next =NULL ; 
    lastnode->next= newnode ; 
    lastnode = newnode ; 
       
   }
}

 void display (struct Node *p){ 
    while(p){ 
        cout<<p->data<<' '; 
        p=p->next; 
    }
 }

void deletefirstNode(struct Node *p  ){
    p = firstnode ; 
    firstnode = firstnode->next; 
    int x=p->data; 
    delete p ;  


} 
void deleteNode  (struct Node *p , int postion ){ 
    struct Node *q;
    p=firstnode ; 
    q=NULL; 
    for(int i=0; i<postion-i && p; i++){ 
        q=p ; 
        p=p->next; 

    }
    q->next=p->next; 
    int x = p->data; 
    delete p ; 

}
 void deleteDublicateSorted(struct Node *p ){ 
    struct Node *q ;
    p=firstnode->next ;  
    q=firstnode; 
    
    while (p)

    {    
          
          if(p->data== q->data){ 
             q->next=p->next ; 
              delete p ; 
              p=q->next; 
            
          }else{ 
            q=p ;
            p=p->next; 
          }
         
        
    }
    
     

 }

int main(){ 
    int A[]={1,3,4,9,22}; 
    int sortedArr[]={1,3,4,4,5,5,7};
     create(sortedArr,7); 
     
     deleteDublicateSorted(firstnode);
     
        // deleteNode(firstnode,3);
     
     display(firstnode); 

     return 0 ; 

}


