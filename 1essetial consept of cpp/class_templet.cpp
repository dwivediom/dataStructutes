#include <iostream>
using namespace std ; 
template <class t > 
class arithmatic { 
    private : 
        t a  ; 
         t b ; 
    public : 
     arithmatic(t a , t b );
     t add(); 
    t sub();
           
};
template <class t > 
arithmatic <t> :: arithmatic(t a ,t b ){ 
    this->a=a ;
    this->b=b ; 

}
template <class t > 
t arithmatic <t>::add(){ 
    return a+b;
}
template <class t > 
t arithmatic<t> ::sub(){ 
    return a-b;

}
int main(){ 
     arithmatic <int> ar(2.555 ,4); 
     arithmatic <float> ab(17.333,3);
     cout<<"add"<<ar.add();
     cout <<" add for ab"<<ab.add();
     
}