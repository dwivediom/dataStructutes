// combination formula  --- to find combination 

#include <iostream> 
using namespace std ; 

 int factorial(int j ){                      // to calculate factorial 

     if (j ==0 ){
         return 1 ;
     }else{ 
        return factorial(j-1)*j;  
     }
 }
 int nCr(int n ,int r ){                     // value of ncr using formula -- nCr= n!/(n-r)!*r! 
                                            // time complexity - n  
     int num , den; 
     num = factorial(n); 
     den = factorial(n-r)*factorial(r); 
     return num /den ; 
 }
int NCR( int n , int r ){               //  value of ncr using recurssion 

if (n ==r || r ==0 ){ 
    return 1 ; 
}else { 
    return NCR(n-1, r-1 )+NCR(n-1,r); 
}
                                        
}
 int main (){ 
    cout <<"using recurssion:"<< NCR(4,4)<< endl ;
    cout << factorial(6);
    cout << endl << "using formula: " << nCr(5,3); 
    return 0;
 }

