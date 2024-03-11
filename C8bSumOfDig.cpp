//SumOfDigitsInGivenNo
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
     
    int sum = 0;
    int lstDig;

    while(n>0){
        lstDig = n%10;
        sum +=lstDig;
        n=n/10;
    }

    cout<<"Sum of Digits in a number is: "<<sum;

    return 0;
}