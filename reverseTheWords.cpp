#include <iostream>
#include <string>
using namespace std;

void reverseword(string &a)
{
    int n = a.length();
    char ch[10];
    int j = 0;
    int i = 0;
    string temp = "";

    while (a[i] != '\0')
    {
        while (a[i] != '\0' && a[i] != ' ')      // storing the single word in ch
        {
            ch[j++] = a[i];
            i++;
        }
        while (j > 0)
        {
            temp.push_back(ch[j - 1]);      // storing from backward into temp string
            j--;
        }
        j = 0;
        if (i == n)                        // it will not allow to add space after the last word
            break;
        temp.push_back(' ');                 // adding the space after each word
        i++;       // to escape space
    }
    a = temp;
}

int main()
{
    string a = "aise kaan ke niche lagake dunga";
    reverseword(a);
    cout << a;
}