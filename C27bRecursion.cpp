//Program to find n th fibonacci number
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0) {return 0;}//Base case
    else if(n==1) {return 1;}//Base case
    
    return fib(n-1)+fib(n-2);//Self work
}

int main(){
    int n ;
    cout<<"Enter the Fibonacci number you want: "<<endl;
    cin>>n;

    int result  = fib(n);

    cout<<result;

    return 0;
}