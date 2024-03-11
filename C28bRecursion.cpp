//Value of p^q
#include<iostream>
using namespace std;

int f(int p , int q){
    if(q==0) return 1;//Base case

    return p*f(p,q-1);//Self work
}

int main(){

    int p,q;
    cout<<"Enter the number: ";
    cin>>p;
    cout<<"Enter the power: ";
    cin>>q;

    int result = f(p,q);

    cout<<result; 
    return 0;
}