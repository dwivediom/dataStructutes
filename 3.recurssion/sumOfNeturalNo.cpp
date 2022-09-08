#include <iostream>
using namespace std ; 
int sumOfN(int n ){ 
    if(n==0){ 
        return 0 ; 
    }else{ 
      return sumOfN(n-1)+n;
    }
}
    
int sumOfNm(int n ){ 
  // sum of n number using formula 
  int sum = ((n+1)*n)/2;
  return sum ; 
}


int main()
{  int b = sumOfNm(7);
   int a = sumOfN(7); 
   cout << a << endl<< "using formula= "<<b  ; 
    
    return 0 ;
}


