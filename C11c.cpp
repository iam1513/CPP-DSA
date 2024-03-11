//Default Parameter Value

//It is a value int the function declaration automatically assigned by the compiler if the calling function does not pass any value to that argument

#include<iostream>
using namespace std;

int add(int a, int b=1 , int c=2){
    return (a+b+c);
}

int main()
{
    cout<<add(2)<<endl;//2+1+2
    cout<<add(2,2)<<endl;//2+2+2
    cout<<add(2,2,3)<<endl; //2+2+3
    return 0;
}