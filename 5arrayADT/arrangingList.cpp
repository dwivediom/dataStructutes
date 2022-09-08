#include <iostream>
using namespace std ; 

class arrengeingArray { 
    public: 

        int negativeOnLeft(int arr[10], int length){  
                  int i =0 , j=10 ;
                  while ( j>i){
                    // while (arr[i]>0)
                    // {    i++;                    }
                    // while (arr[j]<0)
                    // {
                    //     j--;
                    // }
                    
                     if(arr[i]<0){ 
                        i++;
                      
                     }
                     if (arr[j]>0){ 
                        j--;
                     
                     }
                    if(arr[i]>0 || arr[j]<0){ 
                        int temp = arr[i];
                        arr[i]=arr[j];
                        arr[j]= temp;
                    }





                  }
                  for(int i=0 ; i<=10 ; i++){ 
                         cout<< arr[i]<<" "; 
                  }
                  return 0 ;
        }

};
int main (){ 
 arrengeingArray arr1 ; 
 int arr[10] ={1,-3,-5,3,9,5,-6,-7,10,-11} ;

 arr1.negativeOnLeft(arr,10) ;
 return 0 ; 
}