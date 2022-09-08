#include <iostream>
using namespace std ;


void TOH ( int n , char ta  , char tb , char tc){ 
       
       if(n>0){ 
         TOH(n-1 , ta , tc, tb );    // move n-1 or 2 disc form tower a to tower b using c  
         cout << " move disk " << n <<" from "<<ta << " to "<< tc<<endl; 
         TOH(n-1 , tb , ta, tc );   // now move n-1 disc from twoer b to tower c using a 

         
       }


}
int  main (){ 
     TOH(3,'A','B','C');
     return 0;  
}