#include <iostream> 
using namespace std ; 


struct Node {
     int data ; 
     struct Node *next;
}*fristNode =NULL ; 

void createLL( int A[] , int size ){ 
     struct Node *newNode , *lastNode ; 
     fristNode= new Node ; 
     fristNode->data=A[0]; 
     fristNode->next=NULL; 
     lastNode= fristNode; 

   for(int i=1 ; i<size ; i++){ 
     newNode = new Node ; 
     newNode->data=A[i]; 
     newNode->next=NULL; 

     lastNode->next= newNode; 
     lastNode=newNode; 

   }


}

int count(struct Node *p ){ 
     int count =0 ; 
    while (p){ 
        count++ ; 
        p=p->next; 
    }
   cout<< count << endl; 
   return 0 ;    
}

int max (struct  Node *p){ 
    int max = -32768; 
    while (p!=NULL){ 
          if(max<p->data){ 
             max=p->data; 
             p=p->next;

          }
    }
    return max ; 
}
int Rmax (struct Node *p){ 
     int x;
      if(p!=NULL){
          x = Rmax(p->next); 
            if(x>p->data){ 
                return x ;
            }else{ 
                return p->data; 
            }
      }else{ 
        return -32768 ; 
      }
 return x ; 
}


void display (struct Node *p){
  
 int sum = 0 ; 
while(p!=NULL){ 
    if(sum<20){
 
    cout<< p->data<< " : " ; 
    
    p=p->next; 

    }
   

}

}

int main(){ 
    struct Node *temp; 
    int A[]={1,2,3,4,5};
    createLL(A, 5 );
    display(fristNode); 
   int x = Rmax(fristNode); 
    cout << x ;
    // count(fristNode); 

    
    
  return 0 ; 
}