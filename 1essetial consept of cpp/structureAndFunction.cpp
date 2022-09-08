#include <iostream>
using namespace std; 
 struct  rect 
 {
      int length ; 
      int breadth ;

 };
 int area (struct rect r){ 
      cout<<"area of the rectangle ";
      
       int a =  r.length*r.breadth;
       return a ; 
 }
 int parameter( struct rect r){ 
     cout<<" parameter of the rectangle";
     int p =2*(r.length+r.breadth);
     return p;
 }

int main(){ 
        struct rect r = { 4,5};
        cout <<"length = "<<r.length<<endl<<"breadth ="<<r.breadth; 
        int  ar = area(r); 
       int pr= parameter(r);
       cout <<"area "<<ar<<endl<<"paramerter"<<pr;
}