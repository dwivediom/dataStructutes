#include <iostream> 
using namespace std ; 

class Array{ 
    private : 
       int *A; 
       int  size; 
       int length ; 
    
    public:          
        Array(int size){        // contructor -> creates new object 
            this->size= size; 
            A= new int[size];
        }
       void create(){ 
        cout<< " enter the no of element you want to insert "; 
         int n ,m; 
         cin >>  n ; 
         this->length =  n; 
         cout << " enter the elements:  "; 
        for(int i =0 ; i<n; i++){
         cin>> m ; 
         A[i]= m ; 
        }
       }


       void display ( ){ 
     for(int i =0 ; i<length; i++){ 
        cout<< A[i];
        }}
     
     ~Array(){           // distructor  -> distroy objects 
        delete[] A;
        cout<<"array A deleted "<<endl;  
     }
};
int main(){ 
    Array arr(10); 
    arr.create(); 
    arr.display();
    return 0 ; 
}