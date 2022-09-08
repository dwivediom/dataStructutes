#include <iostream> 
using namespace std ; 


//  1`1  2 3  5 8   
// f (1) { }
int fib ( int j ){ 
 if(j == 0 ){ 
    return 0 ; 

 }else if ( j ==1 )
 {
     return 1 ;
 }else { 
      return fib(j-2)+fib(j-1); 
 }
 
}

int wihtLoop( int n){ 
            int x =1 ;
            int t1 = 0 ; 
            int t2 = 1 ; 
          for (int i = 1 ;  i<=n-1 ; i++ ){   // 0 1 1 2 3 5 
                 x = t1 + t2  ; 
                 t1= t2 ; 
                 t2 =x ; 
                 cout << x <<"  "; 



          }
          return x ; 
}

int main(){ 
    cout << fib(7)<<"  /"<< endl; 
     
    cout << wihtLoop(7); 
}