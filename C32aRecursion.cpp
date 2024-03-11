//Given two numbers x and y.Find the greatest common divisor of x and y using recursion.
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){

    int x = gcd(60,40);
    cout<<x;
    return 0;
}