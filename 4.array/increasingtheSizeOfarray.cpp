#include <iostream>
using namespace std; 

int main (){ 

    int *p ; 
    p=new int [5];                    // we want  to increase the size of array p 
    for(int i=0 ; i<5; i++){          // assing some random value in array p 
        p[i]=i;
    }
     int sizeOfArr= sizeof(p)/sizeof(p[0]);

    int *q = new int[10]  ;             // we have to create a new array q of any increased value 

                                 
      for (int i = 0; i < 5; i++)    // tranfaring the value of p into q  
    {                                     
        q[i]=p[i]; 
    }

    delete []p;                            // delete arry p form heap not the variable 

    p=q ;                                 // assign the variable q into p
    q= NULL;                              // set the value of q null  
     int b =7 ; 
     int sizeOfArrp= sizeof (p);
     for (int i = 0; i < 5; i++)
     {
        cout<< p[i]; 
     }
    
     cout<<endl<< sizeOfArr; 
     return 0 ; 
}