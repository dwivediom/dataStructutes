#include <iostream>
using namespace std; 

struct  Array 
{        
        int A[10]; 
         int size ; 
         int length ;     
 };

void display (struct Array arr ) { 
        for(int i= 0 ; i<arr.length;  i++){ 
                cout  << arr.A[i]<<"  "; 
        }  
     
}

void Append (struct Array *arr, int input){ 
        //    cout<<arr->length << "size ="<< arr->size; 
          if(arr->length< arr->size){ 
               
                // cin>>input ;  
               arr->A[arr->length++]=  input; 
             
             
          }
        
}

void Insert ( struct Array *arr , int postion, int input ){ 
        for (int i =arr->length ;i >= postion ; i-- ){ 
                arr->A[i]=arr->A[i-1]; 
                if(i=postion){ 
                        arr->A[i]= input; 
                }

        }}
void Delete(  struct Array *arr , int indexNo ){ 
        for(int i= indexNo ; i <= arr->length; i++  ){ 
                arr->A[i]= arr->A[i+1]; 
        }
        arr->length--; 
}     




int main ( ){ 
    struct Array arr = {{2,5,7,8,6},10,5}; 

   
    Append(&arr, 9); 
    Insert(&arr, 3,10); 
    Delete(&arr , 3);
     display ( arr); 
} 