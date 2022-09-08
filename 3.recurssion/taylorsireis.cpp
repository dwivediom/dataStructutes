#include <iostream>
using namespace std ; 


 double  e(double x , double n ){ 
     static double p =1 ; 
     static  double f = 1 ; 

     if (n ==0 ){ 
        return 1 ; 
     }else{ 
       double r = e(x , n-1 ); 
       p= p*x ; 
       f = f * n ; 
       return r + p/f ;
     }


}


// USING THE LOOP 

double taylor( double y , double z ){ 
    double s  ; 
   for ( int i = 1 ; i <= z; i ++  ){ 
             double p =  p*y ; 
             double f = f * i ; 
             s =  s + p/f ; 
     

   }
       return  s ; 
}


int main(){  
    double r = e( 1 , 10);

    double b = taylor(1,10); 
    cout << r <<endl << b<< endl  ;  

}
