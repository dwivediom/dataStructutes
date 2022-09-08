#include <iostream> 
using namespace std ; 

class reverseArray { 
    public : 
  
      
       int byDublication( int arr[10]){ 
              int arr2[10]; 
              for(int i=10, j=0; i>=0; i-- , j++ ){ 
                 arr2[j] = arr[i]; 

              }
              for(int i = 0 ; i<=10 ; i++){ 
                arr[i]=arr2[i]; 
                cout << arr[i]<<"  ";
              }
              return 0;
       }

     int byswaping(int arr[10]){ 
           for(int i =0 , j = 10 ; i<j ; i++ , j--){ 
                 int temp =   arr[i]; 
                 arr[i]=arr[j]; 
                 arr[j] = temp ; 
               
           }
           for(int i = 0 ; i<=10 ; i++){ 
              cout << arr[i]<<"  ";
           }
           return 0 ;
     }
};

int main (){ 
     reverseArray arr3; 
     int arr[10] = {1,2,3,4,5,6,77,88,99,11}; 
    // arr3.byDublication(arr);
    arr3.byswaping(arr);

}