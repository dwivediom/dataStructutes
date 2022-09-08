#include <iostream>
using namespace std ; 

int power(int e , int x  ){ 
         if (x == 0 ){ 
            return 1 ; 


         }else{
             return  power(e, x-1 )*e;
         }
}

int main (){ 

    int a = power(2,3); 
    cout << a ; 
    return 0  ; 
}
