#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n = 5;
    if(n==0 or n==1) return n;
    int fib = 0;
    int a = 0; int b = 1;
    
    for(int i = 2; i <= n; i++){
        fib =(a+b);
        a = b;
        b = fib;
    }

    cout<<fib;

    return 0;
}