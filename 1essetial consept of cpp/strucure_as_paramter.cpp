#include  <iostream>
using namespace std; 

// struct reactangle { 
//  int length ;
//  int breadth ; 

// }; 
//  void fun ( struct  reactangle r ) 
//  {cout <<endl<<"fun"<<endl<< "length "<< r.length<<endl<< "breadth "<< r.breadth; 
     
//  };
 
//  int main(){ 
//    struct reactangle r={10,20};
//     cout << "length "<< r.length<<endl<< "breadth "<< r.breadth; 
//     fun(r);
//     return 0 ; 
     
//  }

// struct reactangle { 
//  int length ;
//  int breadth ; 

// }; 
//  void fun ( struct  reactangle *p ) 
//  {
//    p->length= 50;
//    cout <<endl<<"fun"<<endl<< "length "<< p->length<<endl<< "breadth "<< p->breadth<<endl; 
     
//  };
 
//  int main(){ 
   
//    struct reactangle r={10,20};
//       fun(&r);
//     cout << "length "<< r.length<<endl<< "breadth "<< r.breadth; 
 
//     return 0 ; 
     
//  }

                                              //returning addres to heap 

struct reactangle { 
 int length ;
 int breadth ; 

}; 
 void fun ( struct  reactangle *p ) 
 {
   p->length= 50;
   cout <<endl<<"fun"<<endl<< "length "<< p->length<<endl<< "breadth "<< p->breadth<<endl; 
     
 };
 
 int main(){ 
   
   struct reactangle r={10,20};
      fun(&r);
    cout << "length "<< r.length<<endl<< "breadth "<< r.breadth; 
 
    return 0 ; 
     
 }
