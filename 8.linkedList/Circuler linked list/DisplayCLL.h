#include <iostream>
#include <array>
using namespace std ; 

struct Node { 
     int data ; 
     struct Node *next ; 

}*firstNode=NULL; 


void createCLL(int A[] , int size ){ 
    struct Node *lastnode , *newnode ; 

        firstNode = new Node ; 
        firstNode->data= A[0]; 
        firstNode->next = NULL ; 
        lastnode = firstNode ; 

        for(int i=1 ; i<size ; i++){ 
            newnode = new Node ; 
            newnode->data=A[i]; 
            newnode->next =NULL; 
            lastnode->next = newnode ; 
            lastnode = newnode ; 
        }
        
        lastnode->next=firstNode; 

}

void displayCLL(struct Node *p ){ 
    do{ 
        cout<< p->data<< " "; 
        p=p->next;
    }while(p!=firstNode); 
}
// int main (){ 

//     int A[] = {1,4,5,6,7,8};
//     int size =sizeof(A)/sizeof(A[0]); 
 
//     createCLL(A , size );
//     displayCLL(firstNode); 

//     return 0 ; 
// }