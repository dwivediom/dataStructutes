#include <iostream> 
using namespace std ; 
int factorial(int n ){ 
    if (n==0){ 
          return 1 ;
    }else{
      return factorial(n-1)*n; 
    }
}

int main(){ 

int result = factorial(4); 
cout<< result ; 
return 0; 

} 