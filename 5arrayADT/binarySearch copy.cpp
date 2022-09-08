#include <iostream>
#include <cmath>
using namespace std ; 

 struct Array  { 
     int A[20]; 

 };
 int bianrySearch(struct Array arr , float element ){ 
    float lowVal  = 0 ; 
    float highVal = 20; 
   

    while (highVal >=lowVal)
    {
       
        int midVal =  floor((lowVal + highVal )/ 2 ); 
         cout<< "low: "<< lowVal<< "  high : "<< highVal << "  midval : "<<midVal<<endl;
         if(lowVal==midVal || highVal== midVal){ 
             cout << element << "is at postion"<<midVal+1; 
             return 0 ;
         }
         else if (element<=arr.A[midVal]){ 
               highVal = midVal-1; 
         }else{ 
             lowVal= midVal+1;
         }
    }
    if(lowVal>highVal){
        cout << "elemnt not found in array ";
    }
    return 0 ; 

 }


 int main(){  
           
  struct Array arr ={ 1,2,3,4,5,6,11,13,14,17,18,20,21,22,24,29,30,34,35,36}; 

     bianrySearch(arr , 1);
    return 0  ; 
 }