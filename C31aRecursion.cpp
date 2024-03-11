// Given a number n. Find the increasing sequence from 1 to n without using any loop.
// Self code
#include<iostream>
using namespace std;

int f(int m, int n){
    if(m == n+1){return m;}
    
    f(m,n-1);
    cout<<n<<" ";
}

int main(){
    int n = 5;
    f(1,n);
    return 0;
}