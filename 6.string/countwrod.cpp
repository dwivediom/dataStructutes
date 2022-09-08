#include <iostream> 
using namespace std ; 

int  counwords(string str){ 
     int  countspace = 1 ; 
    for(int i = 0 ; str[i]!='\0'; i++ ){ 
     
            if(str[i]==' '  && str[i-1]!=' '){ 
                countspace++;
               
            }
             
       


    }
    cout << " no of words are "<< countspace; 

    return 0 ; 
}
int main (){ 
    string sentence = "hello i am om";
    counwords(sentence); 

}