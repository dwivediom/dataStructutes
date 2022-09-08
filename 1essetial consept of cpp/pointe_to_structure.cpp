#include <iostream> 
using namespace std ; 
struct  rectangle
     {
          int lenght ; 
          int bridth; 
     };
     struct rectangle r1,r2,r3; 

 
 int main(){ 
     r1.lenght=51; 
     r1.bridth=33; 

     cout<< r1.lenght<< endl <<r1.bridth;
      struct rectangle *p=&r1 ;
      cout<<endl<<(*p).lenght;


     
     return 0 ; 

     }

     