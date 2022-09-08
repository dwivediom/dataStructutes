#include <iostream> 
using namespace std ; 

struct Node { 
    struct Node *prv ; 
    int data ; 
    struct Node *next ; 

}*firstnode ,*last=NULL; 

void createDLL (int A[] , int size){ 
      struct Node *newnode , *p, *lastnode ;  ; 
       
       firstnode = new Node ;
       firstnode->data =A[0]; 
       firstnode->next= firstnode->prv= NULL ; 
       lastnode =firstnode ; 

       for(int i= 1 ; i<size ; i++){ 
       newnode = new Node ; 
       newnode->data = A[i]; 
       newnode->prv= lastnode ; 
       lastnode->next = newnode ; 
       lastnode= newnode ; 

     
       }
       lastnode->next = NULL; 
       last= lastnode ; 
}




void Display(struct Node *p ){ 
   
    while(p!=NULL){ 
        cout << p->data<<" " ; 
        p=p->next ; 

    }
    cout<< endl; 
    //  p=last; 
       
   
    // do{ 
    //     cout<< p->data << " ";
    //     p=p->prv; 
    // } while (p!=NULL);
     
}

void inserDLL (struct Node *p ,int postion ,int element){
    
    struct Node *q ,*newnode ; 
    newnode = new Node ; 

    newnode->data= element ; 
    
    newnode->next=newnode->prv= NULL; 
      
    if(postion== 0 ){ 
        newnode->next= firstnode; 
        firstnode->prv = newnode ; 
        firstnode= newnode ; 

    }else{ 
        for(int i=1 ; i<postion ; i++){
            
             p=p->next; 
        }; 
       
        newnode->next = p->next; 
        newnode->prv=p; 
        if(p->next)
         {p->next->prv=newnode;}
         
        p->next= newnode ; 

        

        

        
       
    }

}

void DeleteDLL(struct Node *p , int postion ){ 
    for(int i=1; i<=postion; i++){ 
        p=p->next; 
    }
    p->prv->next = p->next ; 
    p->next->prv= p->prv ; 
    int x = p->data ; 
    delete p ; 
}

void reverse(struct Node *p ){ 
    struct  Node *temp; 
   
    while (p!=NULL)
    {   
         temp=p->next ;
         p->next= p->prv ; 
        p->prv = temp; 
         
        p=p->prv ; 
       
        if(p!=NULL && p->next == NULL){ 
            firstnode =p ;
           
        }
    }     
}
  


  void circulerDLL(struct Node *p ){ 
        while (p->next!=NULL)
        {
            p=p->next; 

        }
        cout<< p->data << endl ; 
        p->next= firstnode ; 
        firstnode->prv= p ; 
        cout<< p->next->data<<endl; 

        
      
  }
  void displayCDLL(struct Node *p){ 
             do{
                cout<< p->data<<" "; 
                p=p->next; 

             }while(p!=firstnode);
  }

int main (){ 
    int A[]={1,2,3,4,5}; 
    createDLL(A,5);
    
    // inserDLL(firstnode , 3, 22); 
    //  Display(firstnode); 
    //  DeleteDLL(firstnode, 3);
    //  reverse(firstnode ); 
    circulerDLL(firstnode); 
    displayCDLL(firstnode); 


    return 0 ; 
}