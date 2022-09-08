#include <iostream>
#include <string.h>
using namespace std;

string toLowercase(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 97)
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int findDuplicate(string str)
{
    string newstr = toLowercase(str);

    int size = str.size();

    // building  optimize hash
    int low = newstr[0];
    int high = newstr[0];
    for (int i = 0; i <= size; i++)
    {
        if (newstr[i] < low)
        {
            low = newstr[i];
        }
        else if (newstr[i] > high)
        {
            high = newstr[i];
        }
    }

    int hash[high - 97] = {0};
    // assinging value to hash tabel
    for (int i = 0; i <= size; i++)
    {
        // cout<<i ;

        hash[newstr[i] - 97] = hash[newstr[i] - 97] + 1;
        //   cout<< newstr[i];
    }

    for(int i=0 ; i<=high-98; i++){ 
        if(hash[i]>1){ 
             int val = i + 97; 
             char s= i+97;
            cout << " ther is "<< hash[i]<< " : "<< s << endl ; 
        }
    }
}

int main()
{

    string name = "ddabbcdu";
    findDuplicate(name);
    // string str = toLowercase(name);
    // cout<< str ;
}
