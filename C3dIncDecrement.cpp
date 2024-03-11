#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    cout << a++ << endl; // post increment
    cout << a-- << endl; // post decrement

    int b = 5;
    cout << ++b << endl; // pre increment
    cout << --b << endl; // pre decrement

    int c = 6;
    cout<<(c++)<<endl;//6
    
    int d = c+5;
    cout<<(d)<<endl;//12
    //Value of c is increasing but after returning us value before increment

    return 0;
}