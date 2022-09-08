#include <iostream>
using namespace std ; 

struct Array{ 
    int *A; 
    int size ; 
    int length ; 
}; 

void display ( struct Array arr){ 
    for(int i =0 ; i<arr.length; i++){ 
        cout<< arr.A[i];
    }
}
int main(){ 
       struct   Array arr; 
       cout << " enter the size of array : "; 
       cin >> arr.size ; 
       arr.A = new int[arr.size]; 

       // to insert eleiment 
        cout<< " enter the no of element you want to insert "; 
         int n ,m; 
         cin >>  n ; 
         arr.length =  n; 
         cout << " enter the elements "; 
        for(int i =0 ; i<n; i++){
         cin>> m ;  
         arr.A[i]= m ; 
        }

      display(arr);
 
}