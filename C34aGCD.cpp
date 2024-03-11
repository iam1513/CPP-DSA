// EUCLID'S ALGO

#include<iostream>
using namespace std;

int f(int a, int b){
    if(b == 0){
        return a;
    }
    if(b<0){
        return 1;
    }

    return f(b,a%b);
}

int main(){

    // int a,b;
    // cin>>a,b;

    cout<<f(22,10);

    return 0;
}