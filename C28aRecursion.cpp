//Given an integer, find out the sum of its digits using recursion.
#include<iostream>
using namespace std ;

int sumof(int n){
    if(n>=0 && n<=9) return n;

    return sumof(n/10) + sumof(n%10);

}

int main(){
    int n ;
    cout<<"Enter the Integer value "<<endl;
    cin>>n;

    int sum = sumof(n);

    cout<<sum;

    return 0;
}