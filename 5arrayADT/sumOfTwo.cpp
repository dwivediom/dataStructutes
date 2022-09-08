#include <iostream> 
using namespace std ; 

class Array { 
    public: 
     int findSum(int arr[10]){ 
         int sizeofarr=10;
          int low=100; 
          int high=0; 
         for (int i = 0 ; i<=10; i++){ 
            if(arr[i]>high){ 
                high=arr[i];
            }

            if(arr[i]<low){ 
                low=arr[i];
            }
         } 
         int H[high]={0}; 
         for(int i= 0 ; i<=high ; i++){ 
             if (i<sizeofarr){ 
                int val = arr[i]; 
                H[val]++;
             }
          cout<< H[i]<<" ";
        
         }
         
         for (int i = 0 ; i<=high ; i++){ 
            if (H[i]>0 && H[10-i]>0){ 
                cout <<endl<< i << " "<< 10-i << endl; 
            }
         } 


        return 0 ; 
     }; 

    int sumOfInSortedArray(int  sortArr[10]){ 
        int sizeOfArr=10;
        int i = 0 ; 
        int j =9;
     
        while (i<j){ 
            //  cout << j << endl; 
             int val =  sortArr[i]+ sortArr[j]; 
            //  cout<< val << " " <<  sortArr[i]<< " " << sortArr[j]<<endl; 
             if(val==10){ 
                cout <<  sortArr[i]<< " " << sortArr[j]<< endl; 
                i++; 
                j--; 
             }
             else if (val<10){ 
                i++ ; 
             }else {
                j--;
             }
        }
       return 0;                 
    }
};

int main (){ 
    Array arr1 ; 
    // int arr[10]={3,5,5,6,9,20,11,12,7,1}; 
    // arr1.findSum(arr);
    int sortArr[10]={1,2,3,4,5,6,8,10,12,14};
    arr1.sumOfInSortedArray(sortArr);
}