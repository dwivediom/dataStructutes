#include <iostream> 
#include<math.h>
using namespace std ; 

struct element { 
    int coff ;       // coffciant 
    int exp ;          // exponent 
};

struct poly { 
    int noOfEle; 
    struct element *e ; 

};

void createPolynomial(struct poly *p  ){ 
    cout<<"enter no of elements  "<< endl; 
    cin>>p->noOfEle; 
    p->e= new element [p->noOfEle]; 
    cout << "enter element coffeciant , exponent  "<< endl; 
    for(int i = 0 ; i<p->noOfEle; i++){ 
        cin >> p->e[i].coff >> p->e[i].exp; 
        cout<< "__"; 

    }

}
void display (struct poly p ){ 
     cout << "its working ";

for (int i =0 ; i<p.noOfEle ; i++ ){ 
    cout << p.e[i].coff<<" x^"<< p.e[i].exp<< "+"; 
}
}


struct poly add (struct poly *p1 , struct poly *p2){ 

     struct poly sum ; 
      int i = 0 ; 
      int j= 0 ; 
      int  k= 0 ; 
      sum.e= new element [p1->noOfEle +p2->noOfEle];

       while (i<p1->noOfEle && j <p2->noOfEle){ 
        
             if(p1->e[i].exp > p2->e[j].exp){ 
                sum.e[k++]=p1->e[i++];
             }else if(p2->e[j].exp > p1->e[i].exp){ 
                   
                sum.e[k++]=p2->e[j++];
             }else{ 
                   cout << p1->e[i].exp;
                sum.e[k].exp= p1->e[i].exp; 
                sum.e[k++].coff = p1->e[i++].coff + p2->e[j++].coff; 
               
             }
       }
       
       sum.noOfEle= k ; 
       cout << sum.noOfEle;
       display(sum); 
       return sum ; 
}


int main (){ 
    struct poly p , p2 ,sum ; 
    createPolynomial(&p); 
    createPolynomial(&p2);
    sum = add( &p , &p2); 

    display(sum); 
    
    return 0 ; 
}