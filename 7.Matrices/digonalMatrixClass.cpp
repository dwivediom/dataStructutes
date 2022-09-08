#include <iostream>
using namespace std;

class Digonal
{
private:
    int size;
    int *matrix;

public:
    Digonal(int size)
    {
        this->size = size;
        matrix = new int[size];
    }
    int set(int i, int j, int input);
    int get(int i, int j);
    int display();
    ~Digonal()
    {
        delete[] matrix;
    }
};
int Digonal::set(int i, int j, int input)

{
    if (i == j)
    {
        matrix[i ] = input; // hear we are converting digonal matrix to single dimention arry to save space
                               // so we use matirx [i-1] insted of matrix[i,j] because the i == j in digonal matrix
    }
    return 0;
}
int Digonal::get(int i, int j)
{
    if (i == j)
    {
        cout << matrix[i ];
    }
    return 0;
}
int Digonal::display()
{
    for (int i = 0; i <=size; i++)
    {
        for (int j = 0; j <=size; j++)
        {
            if (i == j)
            {
                cout << matrix[i];
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    Digonal d(3);
    d.set(0, 0, 2);
    d.set(1, 1, 3);
    d.set(2, 2, 4);
    d.set(3, 3, 6);
    d.display();

    return 0;
}