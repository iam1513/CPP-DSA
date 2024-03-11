//p^q using M2 Recursion : Optimized 
#include<iostream>
using namespace std;

int f(int p, int q){
    if (q == 0 ) return 1;//Base case

    if(q%2==0){
        //q is even
        int result = f(p,q/2);
        return result * result;
    }
    else{
        //q is odd
        int  result = f(p,(q-1)/2);
        return p * result * result;
    }
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