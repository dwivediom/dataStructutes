#include <iostream> 
using namespace std ; 

struct Node  {
    int data ; 
    struct  Node *next ;  // self refrential structure 

}*firstNode=NULL ; 


void create ( int A[], int size ){ 
    struct Node *newnode , *lastnode ; 
     firstNode = new Node ; 
     firstNode->data=A[0];
     firstNode->next=NULL; 
     lastnode = firstNode ; 

     for(int i= 1 ; i<size; i++ ){ 
         newnode = new Node ; 
         newnode->data=A[i]; 
         newnode->next= NULL; 
         lastnode->next= newnode ; 
         lastnode = newnode; 
     }

} 

 int search (struct Node *p , int element  ){ 
      while (p!=NULL){ 
       if(p->data==element){ 
        cout<< p->data << " is peresnt in this linked list  " ; 

         return 1; 
       }

        p=p->next;
      }
      cout << element << "is not present  "; 
      return 0 ; 
 }

int Rsearch (struct Node *p , int element ){ 
    int x ; 
    if(p!=NULL){ 
         Rsearch(p->next, element); 
        if(element==p->data){ 
            cout<< p->data << "element found ";
            return 1;
        }
    }
  
    return 0 ; 
}

int imporvedSearch(struct Node *p , int key ){ 
    struct Node * q ; 
    while (p!=NULL){ 
         if(p->data== key ){ 
               q->next = p->next ; 
               p->next = firstNode ; 
               firstNode = p  ; 
               return 1 ; 

         }
         q=p ; 
         p=p->next; 
    }
    return 0; 

}

int main (){ 
    int A[]={1,4,3,5,6}; 
    create(A,5); 
   int x = imporvedSearch(firstNode, 1);
   if(x==0){ 
    cout<<" element is not found ";
   }else{
     cout<< " element is found ";
   }





return 0 ; 
}
