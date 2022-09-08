#include <iostream>
using namespace std;

class Rectangle { 
    private : 
     int length ; 
     int breadth ; 
    
    public : 
    Rectangle (){ 
        int length =1; 
        int breadth = 1; 
    }
    Rectangle(int l , int b ){ 
        
        length =l ;
        breadth=b ;
    }
   int  area(){ 
        return length * breadth ; 
   }
   ~Rectangle (){ 
       cout << " this is a reactangle function "; 
   }
};

int main (){ 
    Rectangle r (2,3); 
    cout << " area ="<< r.area()<<endl;
}