#include<iostream>
#include<string>
using namespace std;

char MaxOccChar( string a )
{
    int number[26] = {0};
    int index;

    for (int i = 0; i < a.length(); i++)
    {
        if ( a[i] >= 'a' && a[i] <= 'z')
        {
            index = a[i] - 'a';
        }
        else
            index = a[i] - 'A';

        number[index]++;    
        
    }

    int max= -1;
    int ans;

    for (int i = 0; i < 26; i++)
    {
        if( max < number[i])
        {
            ans = i;
            max = number[i];
        }
    }
    
    return ans + 'a';
}

int main()
{
    string s;
    cout << "enter the string: " << endl;
    cin >> s;

    cout << "maximum occuring character in the string is "<< MaxOccChar(s) << endl ;
}