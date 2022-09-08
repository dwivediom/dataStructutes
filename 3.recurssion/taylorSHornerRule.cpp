#include <iostream> 
 using  namespace std; 
double e(double   x , double n ){

    double s=1 ; 
for ( ; n> 0;  n--){ 
         
    s =     1+(x /n) *s;  
}

return s; 

}

double er (double x , double n ){  // horner rule for tylor series using recurssion 
    static double s =1 ; 
    if (n==0){ 
        return 1 ;                                    // 1 + x/n (1)

    }else { 
      s =     1+(x /n) *s;  ; 
      return  e(x ,  n-1 );
    }
}


 int main( ){ 
     double r = e ( 1 ,10 ); 
       double err = er (1,10); 
     cout << r << endl << err; 
       
     return 0 ;
 }