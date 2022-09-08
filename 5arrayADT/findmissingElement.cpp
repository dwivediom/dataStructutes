#include <iostream>
using namespace std;

class Array
{
private:
    int A[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11};

public:
    int findElementBysum()
    {
        // by using formula  of sum of n natural number = n * (n+1 )/2
        int size = 1 + sizeof(A) / sizeof(A[0]);
        int sum = (size * (size + 1)) / 2;
        int arrsum = 0;
        for (int i = 0; i <= size - 2; i++)
        {
            arrsum = arrsum + A[i];
        }
        int element;
        if (arrsum != sum)
        {
            cout << "sum " << sum << "-- arrum _" << arrsum << " size " << size << endl;
            element = sum - arrsum;
            cout << "missing element is " << element;
        }
        else
        {
            cout << " ther is no missing element ";
        }
        return 0;
    };
};

int multipulMissigElemnt(int arr[10])
{
    // difrence of elemet and thier index no is constatnt unitl new element is missing
    // if one element is missing the difference is increase by one and if 2 lemement is missing  then the  diffrencce is increase by 2
    int diffrence;
    int diffrence2 = 0;

    for (int i = 0; i <= 10; i++)
    {
        diffrence = arr[i] - i;
        if (i > 0)
        {
            diffrence2 = arr[i - 1] - (i - 1);
            // cout<<i<< "dif1 "<< diffrence << "   dif2 "<<diffrence2<< endl;
        }
        else
        {

            diffrence2 = diffrence;
        };

        int dOfd = diffrence - diffrence2;
        cout << dOfd << "dofd " << endl;
        if (dOfd > 0)
        {

            for (int x = 1; x <= dOfd; x++)
            {
                int element = arr[i - 1] + x;
                cout << element << "is missing " << i << "  " << x << endl;
                element = 0;
            }
        }
    }

    return 0;
}

int UsingHashTable(int rr[10]){
  int size = 10;
  int high=0 ; 
  int low=100 ;  
  for(int i=0 ; i<=10 ; i++){
        if(rr[i]>high){
            high=rr[i]; 
        }
        if(rr[i]<low){ 
            low=rr[i];
        }

  }
 cout<< high<< "  "<< low <<  "  "<<size<<endl; 
 int H[high]={0}; 
 for(int i = 0; i<=high ; i ++){ 
    if(i<=size){
 int val = rr[i]; 
     H[val]++;
    }
     
   
     
 }
 for(int i = low ; i<=high ; i++){ 
    if (H[i]==0){ 
        cout<< "missig eleements are "<<i << endl ;
    }

    if(H[i]>1){ 
        cout<< i <<"comes " << H[i]<< "times " << endl; 
    }
 }

 return 0 ; 
}

int main()
{
    // Array arr1 ;
    // arr1.findElementBysum();
    int ar[10] = {6, 2, 2, 7, 8, 7, 11, 12, 17, 15};
    // multipulMissigElemnt(arr);
    UsingHashTable(ar);
}