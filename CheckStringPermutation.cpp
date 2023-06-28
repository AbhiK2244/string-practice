#include<iostream>
#include<string>
using namespace std;

bool is_countEqual( int c1[26], int c2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if( c1[i] != c2[i])  // count should be equal for every permutation present in s2---> return true
        return false;
    }
    return true;
}

bool check( string s1, string s2)
{
    int count1[26] = {0} ;

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i]-'a';
        count1[index]++;
    }

    int j = 0;
    int count2[26]={0};
    // counting characters for the first window
    while( j < s1.length() && j < s2.length())   // j should not be greater than size of s2
    {
        int index = s2[j++] - 'a';
        count2[index]++;
    }


    // checking if permutation is present in first window
    if( is_countEqual(count1,count2))
    return true;


    // similarly checking for other possible windows
    while( j < s2.length())
    {
        int index = s2[j] - 'a';
        count2[index]++;

        index = s2[j-s1.length()] - 'a';
        count2[index]--;
        j++;
         if(is_countEqual(count1,count2))
         return true;

    }
    return false;
    
}

int main()
{
    string s2="achhathikhai" , s1="haa";
    cout << check(s1,s2);
}