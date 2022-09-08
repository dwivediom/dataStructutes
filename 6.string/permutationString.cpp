#include <iostream> 
#include <string.h>
using namespace std ; 


void permutaionOfstring( string  str, int k    ){ 

    static int hash[3]={0}; 
    static char  result[3]; 

    if(str[k]=='\0'){ 
         result[k]='\0'; 
         cout<<result<<" "; 

    }else{ 
        for(int i=0 ; str[i]!='\0'; i++){ 
            int x = i ; 
          if (hash[i]==0 ) { 
            result[k]=str[i]; 
            hash[i]=1; 
            permutaionOfstring(str, k+1); 
            hash[i]=0; 
          }

        }
    }

}

int main(){ 
    char str[] ="abc"; 
    permutaionOfstring(str , 0); 
    return 0 ; 
}