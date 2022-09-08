#include <iostream>
using namespace std; 


 int findLengthOfstring(string str ){ 
 int i ; 
    for ( i=0 ; str[i]!='\0'; i++ ){ 
     
    }
    cout<< "lenght of string is "<< i<<endl ; 
   return 0 ; 
 }

int toLowerCase(string str){ 
    for(int i= 0 ; str[i]!='\0'; i++ ){ 
         str[i]= str[i]+32; 
    }
    cout<< str ; 
}


 int main (){ 

    string name = "RAHUL"; 
    findLengthOfstring(name);
     toLowerCase(name);
    return 0 ; 
 }