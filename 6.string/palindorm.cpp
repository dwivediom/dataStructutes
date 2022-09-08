#include <iostream>
#include <string.h> 
using namespace std ; 

int chekpalindrom(string str ) { 

         int size = str.size(); 
          char strClone[size];
          for(int i= 0 , j= size ; i <= size ; i++ , j--){ 

              strClone[i]= str[j-1]; 
              cout<< strClone[i];
              

          }
          


          for(int i=0 ; i<=size ; i++){ 
            //   cout <<endl<< str[i] << ","<<strClone[i];
              if(strClone[i]!=str[i]){ 
                     cout <<endl<< str[i] << ","<<strClone[i]; 
                     cout<< " is not a pelindrom ";
                     return 0 ; 

              }
          }

        cout<< str <<" is  a plindrom"; 

 return 0 ; 
}

int main(){ 
    string str = "lirikl";
    chekpalindrom(str);

}