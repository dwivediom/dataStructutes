#include <iostream> 
using namespace std ; 
 
 struct Node { 
      int col ; 
      int row ; 
      int val; 
      struct Node *next ; 
      };

void  createSMatrix(){ 
           int noOfrows; 
           cout<< " enter no of rows "; 
           cin >> noOfrows; 
         struct Node *p ,*q; 
          Node **arr; // pointer to pointer array 
           arr = new Node*[noOfrows];  // array of pointers 
           int noOfelemnts; 
           for(int i= 0 ; i<noOfrows;i++){ 
             *(arr + i )= NULL ;
           }
           cout <<" enter no of  elemnt "; 
           cin>> noOfelemnts ; 
            cout << endl << " enter the postions "<< endl ; 
            for(int i=0 ; i<=noOfelemnts ; i++ ){ 
                     Node *p = new Node ; 
                     
                    int rows; 
                    int cols ; 
                    int vals; 
                    cin >> rows >> cols >> vals ; 
                   p->row = rows ; 
                   p->col = cols ; 
                   p->val= vals ; 
                  
                    if(*(arr + rows )==NULL){
                            p->next= NULL ; 
                          *(arr + rows ) =p ; 

                    }else{
                       q->next= p ; 
                       *(arr+rows)=p;    
                    }
                     q=p;
                  
                   
                  cout << endl << "working "<< endl ; 
                     
            }

        for(int i = 0 ; i<=noOfrows; i++){ 
              int count =1;
              struct Node *j; 
              Node * arrpointer = *(arr + i ); 
              while (arrpointer!=NULL && count<=2){ 
                 count++; 
                 cout<< arrpointer->val; 
                  arrpointer->next ; 
              }
        }
 }
     
 
 int main(){ 
       createSMatrix(); 
       return 0 ; 
 }