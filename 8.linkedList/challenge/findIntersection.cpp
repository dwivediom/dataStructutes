#include <iostream> 
#include <math.h>
using namespace std ;

  struct Node { 
    int data ; 
    struct Node *next ; 

  }*firstNodeA , *firstNodeB ,*junction=NULL ;

  void create(int A[], int size ){ 
      struct Node *newnod , *lastnode ; 
      firstNodeA= new Node ; 
      firstNodeA->data = A[0]; 
      firstNodeA->next= NULL ; 
      lastnode = firstNodeA ; 
      

      for(int i=1; i<size ; i++ ){ 
          newnod = new Node ; 
          newnod->data = A[i]; 
          newnod->next = NULL ; 
          lastnode->next = newnod ; 
          lastnode = newnod ; 
          if(i==size/2){ 
            junction= lastnode ; 
          }

      }
  }
  void create2(int A[], int size ){ 
      struct Node *newnod , *lastnode ; 
      firstNodeB= new Node ; 
      firstNodeB->data = A[0]; 
      firstNodeB->next= NULL ; 
      lastnode = firstNodeB ; 
      

      for(int i=1; i<size ; i++ ){ 
          newnod = new Node ; 
          newnod->data = A[i]; 
          newnod->next = NULL ; 
          lastnode->next = newnod ; 
          lastnode = newnod ; 
          

      }
      lastnode->next  = junction ; 
  }

  void display(struct Node *p){
       while(p){ 
        cout<< p->data <<" "; 
        p=p->next; 

       }
   }
int findIntersection1(struct Node *p , struct Node *q){ 
            // brutforce mehthod 
            int count=0 ; 
            struct Node *temp; 
            while(p!=NULL ){ 
                 temp= firstNodeB; 
               
                while(temp!=NULL ){ 
                    
                     if(temp==p){ 
                           cout<< " interserction "<<p->data; 
                           return 1 ;
                     }
                     temp=temp->next; 
                }
                 
              
                p=p->next ; 
            }
            
            return 0 ; 
}


int intersection2(struct Node *p , struct Node *q ){ 
         // using 2 pointer
         int lenght1 =0 ; 
         int lenght2 =0 ; 

         while (p!=q)
         {
             if(p!=NULL){ 
                p=p->next ; 
             }else{ 
                p=firstNodeB ;
             }
             if(q!=NULL){ 
                q=q->next; 
             }else{ 
                q=firstNodeA; 
             }
             if(p==q){ 
                cout<< endl<< p->data ; 
             }

         }
         
         return 0 ; 


}
 void intersectionMymethod(struct Node *p , struct Node *q ){ 
            int lenght1 = 0 ; 
            int lenght2=0; 

            while(p){ 
                p=p->next; 
                lenght1++ ; 
            
            }
            
            while(q){ 
                q=q->next; 
                lenght2++ ; 
            
            }
             p=firstNodeA; 
             q =firstNodeB ; 
            int diff = abs(lenght1-lenght2); 
            

                if (lenght1>lenght2){ 
                    int i = 0;
                    while (p!=q ){ 
                        cout << endl << " _ "; 
                          if(i>=diff){ 
                            q=q->next ;
                          }
                          p=p->next; 
                           i++;
                    }
                    if(p==q){ 
                         cout<< endl << q->data ; 
                    }
                }
                
                if (lenght1<lenght2){ 
                    cout<< " qiejubf "<< diff ;
                    int i = 0;
                    while (p!=q ){ 
                        cout << endl << " _ "; 
                          if(i>=diff){ 
                            p=p->next ;
                          }
                          q=q->next; 
                           i++;
                    }
                    if(p==q){ 
                         cout<< endl << q->data ; 
                    }

                }
                 
                // cout<< endl << p->data ; 
            
            
 }
   int main (){ 
     int A[]={1,3,4,5,6}; 
     int B[]={8,9,20}; 
     
     create(A,5); 
     create2(B,3);
     display(firstNodeB); display(firstNodeA); 

    //  findIntersection(firstNodeA, firstNodeB); 
    // intersection2(firstNodeA, firstNodeB); 
        intersectionMymethod(firstNodeA, firstNodeB); 
     return 0 ; 
   }