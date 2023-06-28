#include<iostream>
#include<string>
using namespace std;

void replace( string &a )
{
    string temp ="";
    for (int i = 0; i < a.length(); i++)
    {
        if( a[i] == ' ')
        {
            // a.pop_back();
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        temp.push_back(a[i]);
    }
    a = temp;
}

int main()
{
    string s ;
    cout << "enter the string:" ;
    getline(cin,s);  // cin terminates the execution when space, tab or enter is entered
                    // we can getline() function instead of only cin to avoid termination 
    replace(s);
    cout << s;
}