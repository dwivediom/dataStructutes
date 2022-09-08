#include<iostream>
using namespace std  ; 

int set(int matrix[5], int i , int j ,  int input )

{ 
     if(i==j)
     { 
        matrix[i-j]=input; // hear we are converting digonal matrix to single dimention arry to save space 
                           // so we use matirx [i-1] insted of matrix[i,j] because the i == j in digonal matrix 

     }
     return 0 ; 
}
int getMatrix (int matrix[5], int i , int j ){ 
    if(i==j){ 
      cout << matrix[i-1]; 
    }
    return 0 ; 
}
 int display(int matrix[5]){ 
    for(int i = 0 ; i<5; i++){ 
        for(int j = 0 ; j<5; j++){ 
            if (i==j){ 
                cout<< matrix[i];
            }else{ 
                cout<< 0 ; 

            }
        }
        cout<< endl; 

    }
    return 0 ; 
 }

int main (){ 
    int arr[5]={5,6,3,7,2}; 
    // getMatrix(arr, 3,3);
    display(arr); 

}