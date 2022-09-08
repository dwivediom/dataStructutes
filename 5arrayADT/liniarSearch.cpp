#include <iostream> 
using namespace std ; 


struct Array  { 
    int A[10] ; 
}; 

void swap(struct Array *arr , int postion , int element ){ 
       int x = arr->A[postion-1]; 
       arr->A[postion-1]= arr->A[postion];
       arr->A[postion]= x ; 
  cout << "the postion is moved to "<< postion-1 << endl; 

}


int liniarsearch( struct Array arr , int element ){  
     int lenght = sizeof(arr.A) /sizeof(arr.A[0]); 
  
    for(int i = 0 ; i<=10  ; i++  ){ 
        if (arr.A[i]== element){ 
            cout << "at position  "<< i << " the  " << element << " is present"<< endl; 
              // to imporve the search  we move element one step forward every time it searched 
               swap(&arr , i , element); 
        }
    }
    return 0 ; 
};




int main(){ 
  
       struct Array arr = { 1,5,6,7,9,6,44,7,3,11}; 
       
       liniarsearch(arr , 7 ); 

    return 0  ; 
}
