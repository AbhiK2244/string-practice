#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d = {1,3,4};
    d.push_back(2);
    d.push_back(5);                 // we can put elements from both front and back
    d.push_front(7);
    d.push_front(2);
    d.push_back(9);
    d.push_front(6);

    for( int i : d)
    {
        cout << i << "  ";
    }
    cout<< endl;
    sort( d.begin(),d.end() );

    for( int i : d)
    {
        cout << i << "  ";
    }
    cout<< endl;
    deque<int> copy (d);    // copy the deque d int another deque copy

    for( int i : copy)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "element at first index is " << d.front() << endl;
    cout << "element at last index is " << d.back() << endl;
    cout << "element at 4 index is " << d.at(4) << endl;
    cout << "size of the deque d is " << d.size() << endl;
    d.pop_back();     // to delete the last element of the vector
    cout<< "elements of the deque after poping last element" << endl;
    for( int i : d)
    {
        cout << i << "  ";
    }
    cout<<endl;

    cout<< "after clearing the deque" << endl;
    d.clear();  // used the clear all the elements of the deque but capacity of the deque is same
    for( int i : d)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "size of the deque d is " << d.size() << endl;
}
