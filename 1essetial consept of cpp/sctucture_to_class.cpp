#include <iostream>
using namespace std;

// struct Rectangle{
//  int length;
//  int breadth;

// };
// void initialaise  ( struct Rectangle *r, int l , int b){
//     r->breadth= b ;
//     r->length= l ;
// }
// int area( struct Rectangle r ){
//        return r.length * r.breadth;
// }
// int main(){
//  struct Rectangle r = { 10,5};
//  cout <<r.length<< endl <<r.breadth;
// }

// converting them to class

// struct Rectangle       // you can also write class Rectangle  { }
// {                      // the only difrnce is that in struct all the mempers funtion are 
//                        // pbulic but in class you have to make them public  
//     int length;
//     int breadth;

//     void initialaise( int l, int b)
//     {
//         breadth = b;                //r->breadth=b
//         length = l;                 //r->length=l
//     }
//     int area( )
//     {
//         return length *  breadth;
//     }
// };
// int main()
// {
//     struct Rectangle r = {10, 5};
//     cout << r.length << endl << r.breadth;
// }


class Rectangle       // you can also write class Rectangle  { }
{                      // the only difrnce is that in struct all the mempers funtion are 
public:                   // pbulic but in class you have to make them public  
    int length;
    int breadth;

    void initialaise( int l, int b)
    {
        breadth = b;                //r->breadth=b
        length = l;                 //r->length=l
    }
    int area( )
    {
        return length *  breadth;
    }
};
int main()
{
      Rectangle r;
      r.length =20; 
      r.breadth= 5; 
     int a = r.area(); 
     cout<<endl<<a<<endl;

    cout << r.length << endl << r.breadth;
}