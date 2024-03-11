//Given a number n. Find the increasing sequence from 1 to n without using any loop.
#include<iostream>
using namespace std;

void f(int n){
    if (n < 1) return ;
    f(n-1);
    cout<<n<<" ";
}

int main(){
    int n = 5;
    f(n);
    
    return 0;
}