#include <iostream> 
using namespace std ; 


int validateString(string str){ 

     for ( int i = 0 ; str[i]!='\0'; i++){ 

          if( !(str[i]<122 && str[i]>97)){
          
            return 0 ; 
          }else if (!(str[i]<90 && str[i]>65)){
               return 0 ; 
          }

     }
     return 1 ; 
}

int main (){ 
   int x =  validateString("ggg");
    if(x==1){ 
     cout << "this is valid string "; 

    }else{ 
     cout << "this is invalid string ";
    }
    return 0;
}