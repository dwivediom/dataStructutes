#include <iostream>
using namespace std ; 


template<class T> 
class Array { 
    public:
       T *A; 
       int length; 
       int size ; 
    public:
    Array(){           //constructor for  default size Array  
        size = 10 ; 
        length =0 ; 
        A=new int[size]; 
    }

    Array(int sz){        // constructor for desired size array 
        size = sz ; 
        length= 0 ; 
        A = new int[size];   

    }

    ~Array(){ 
        delete []A  ;       // destructor 
    }
     void display (); 
     void createArray( int sz );
}; 
template<class T > 
void Array <T>::createArray(int sz ){ 
            cout<< " create Array "<<endl << "enter a array size "; 
           
            cout << endl << "enter the values "<< endl ; 
            for (int  i =0 ;  i<=sz-1 ;  i++){ 
                int input ; 
               
               cout << "index "<<i<<"->";
                cin>> input  ; 
               A[i] = input;
               length++; 

                
               
            }

                

};

template <class T> 
void Array<T>::display(){ 
        for (int i = 0 ; i<=size-1;i++ ){ 
            cout << ","; 
            cout<<A[i]<<" "; 
        }
     
};


int main(){ 
    
    
    Array<int> *arr1 ; 
    int sz; 
    cout << "enter array size "; 
    cin>> sz ; 
  arr1 = new Array<int>(sz);
  arr1->createArray(sz);

  arr1->display();
return 0 ; 
}