#include <iostream> 
using namespace std ; 


class lowermatrix { 
 private : 
    int size ; 
    int *matrix ; 
public: 
    lowermatrix(int size){ 
        this->size= size; 
        matrix = new int[size]; 
    }     
    int set (int i , int j , int input); 
     int get ( int i , int j);
     int insert (int x ); 
     int display (); 
     ~lowermatrix(){ 
        delete [] matrix ; 

     }


};

int lowermatrix :: set(int i , int j , int input){
    if (i>=j){ 
       this->matrix[ i*(i-1)/2 + j+1]= input; 

    }
    return 0 ; 
}
int lowermatrix :: get(int i , int j ){ 
    if(i>=j ){ 
         cout << this->matrix[i*(i-1)/2 + j-1]; 

    }
    return 0 ; 
}
int lowermatrix :: display (){ 
    for(int i = 0 ; i<size ; i++ ){ 
        for(int y =0 ; y<size; y++){ 
            if(i<y){ 
             cout<< 0 ; 
            }else{ 
               cout <<matrix[i*(i-1)/2 + y-1];
            }
        }

    }
    return 0 ; 
}
int lowermatrix :: insert(int size){ 
    cout<< "enter element "<< endl ; 
    for(int i = 0 ; i<size ; i++){ 
        for(int j = 0 ; j<size ; j++){ 
            int input ; 
            cin>> input; 
            this->set(i,j , input); 
        }
        cout << "____"<< endl; 
    }

}

int main (){ 
    
    cout << " enter no of rows "; 
    int  x ; 
    cin >> x; 
    int size = x *(x+1)/2 ; 

    cout << "size :"<< size << endl;
    lowermatrix M(size); 
    M.insert(x); 
    M.display();

}