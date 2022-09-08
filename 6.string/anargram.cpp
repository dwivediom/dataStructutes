#include <iostream> 
#include <string.h> 
using namespace std ; 


string anagram(string str1 ,string str2){
 
     int Hash[26]={0}; 

    for(int i=0 ; i<=str1.size(); i++  ){ 
         Hash[str1[i]-97]++ ; 
    } 

    for(int i= 0 ; i<=str2.size(); i++){ 

         Hash[str2[i]-97]--; 
         if(Hash[i]<0){ 
            string message = " these words are not anagram "; 
            return message; 
         }
    }
    
    return "these words are anagram"; 
}
int main(){ 
    string message = anagram("medipal","decimal");
    cout<< message;
}