#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
   
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    cout<< (a<50) && (a<b)? 1:0;

    return 0;
}