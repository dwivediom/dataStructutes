#include <iostream>
using namespace std;

struct element
{
    int row;
    int col;
    int val;
};
struct Sparce
{
    int noOfRows;
    int noOfCol;
    int noOfEle;
    struct element *e;
};

void createSmatrix(struct Sparce *s)
{
    cout << "enter dimentions " << endl
         << "enter no of rows ";
    cin >> s->noOfRows;
    cout << " enter no of colmuns ";
    cin >> s->noOfCol;
    cout << endl
         << " enter no of elements ";
    cin >> s->noOfEle;

    s->e = new element[s->noOfEle]; // createing array  of elemnets(row , col , val ) in heap
    cout << " enter row column value ";
    for (int i = 0; i < s->noOfEle; i++)
    {

        cin >> s->e[i].row >> s->e[i].col >> s->e[i].val;
        cout << "___" << endl;
    }
}

void display(struct Sparce s)
{
    
    int k = 0;
    for (int i = 1; i <= s.noOfEle; i++)
    {
        for (int j = 1; j <= s.noOfEle; j++)
        {
            if (i == s.e[k].row && j == s.e[k].col)
            {
                cout << s.e[k++].val;
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}

struct Sparce add(struct Sparce *s1, struct Sparce *s2)
{
    struct Sparce sum;

    if (s1->noOfRows == s2->noOfRows && s1->noOfCol == s2->noOfCol)
    {
        
        sum.noOfRows = s1->noOfRows;
        sum.noOfCol = s1->noOfCol;
        sum.e = new element[s1->noOfEle + s2->noOfEle];

        int i = 0;
        int j = 0;
        int k = 0;

        while (i < s1->noOfEle && j < s2->noOfEle)
        {
            if (s1->e[i].row < s2->e[j].row)
            {
                sum.e[k++] = s1->e[i++];
            }
            else if (s1->e[i].row > s2->e[j].row)
            {
                sum.e[k++] = s2->e[j++];
            }
            else
            { // else row are eql the chek for col
                if (s1->e[i].col < s2->e[j].col)
                {
                    sum.e[k++] = s1->e[i++];
                }
                else if (s1->e[i].col > s2->e[j].col)
                {
                    sum.e[k++] = s1->e[j++];
                }else{ 
                    sum.e[k].col= s1->e[i].col; 
                     sum.e[k].row= s1->e[j].row; 
                     sum.e[k++].val= s1->e[i++].val+ s2->e[j++].val; 
                }
             }
        }
        sum.noOfEle=k ; 
        return    sum ;
    }else { 
        cout << " dimentions of matrix is difrent unable to add "; 
    }
 struct Sparce sum;
}

int main()
{
    struct Sparce s1 ,s2 ,s3;
    createSmatrix(&s1);
    createSmatrix(&s2); 
     s3= add(&s1,&s2);
     cout << &s3.e[0].val; 
    display(s3);

}