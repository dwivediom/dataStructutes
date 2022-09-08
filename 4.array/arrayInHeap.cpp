#include <iostream>
using namespace std ; 

int main(){ 

    int *p; 
    p = new int[5];
    
    p[0]=4;
    p[1]=1; 
    p[2]=2; 
    p[3]=3; 
    p[4]=5;

    for(int i=0; i<5 ; i++ ){ 
        cout<< p[i]<<' '; 
    }

    delete []p ; 
     return 0 ; 

}

