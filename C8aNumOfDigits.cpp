//CountTheNoOfDigits
//n>0 and n-- are same 
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int NumDig = 0;

    while(n>0){
        NumDig++;
        n=n/10;
    }

    cout<<"Number of digits are: "<<NumDig;

    return 0;
}