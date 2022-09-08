#include <iostream>
#include <string.h>
using namespace std;

class reverseString
{
public:
    int byCloning(string str)
    {
        int size = str.size();
        char strClone[size];
        for (int i = 0, j = size; i <= size; i++, j--)
        {

            strClone[i] = str[j];
            cout << strClone[i];
        }
        cout << endl;
        for (int i = 0; i <= size; i++)
        {
            str[i] = strClone[i];

            cout << str[i];
        }

        return 0;
    }

    int byswaping( string str)
    {       
        int size = str.size();
        for (int i = 0, j = size; i < j; i++, j--)
        {
              int swap = str[i]; 
              str[i]=str[j]; 
              str[j]= swap; 

             
        }

          for (int i = 0; i <= size; i++)
        {
            

            cout << str[i];
        }
        cout<< " its working "; 
        return 0; 

    }
};

int main()
{

    reverseString str1;
    string str = "ahmbramhsmi";
    // str1.byCloning(str);
    
    str1.byswaping(str);
    
    return 0;
}