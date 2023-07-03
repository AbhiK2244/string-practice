#include <iostream>
#include <string>
using namespace std;

void compress(string a)
{
    int i = 0;
    int ansindex = 0;
    int n = a.length();
    while (i < a.length())
    {
        int j = i + 1;
        while (j < n && a[i] == a[j])
            j++;

        a[ansindex++] = a[i];

        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);

            for (char ch : cnt)
            {
                a[ansindex++] = ch;
            }
        }
        i=j;
    }
    for(int i = ansindex ; i < n ; i++)
    a.pop_back();
    cout << a << endl;
    cout << ansindex;
}

int main()
{
    string a = "abbcccdddddddddddd";
    compress(a);
}
