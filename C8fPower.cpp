//PowerQuestion
#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Enter the value of n: ";
    cin>>m;

    int ans = 1;

    while(m>0){
        ans = ans*n;
        m--;
    }

    cout<<"Answer is: "<<ans;

    return 0;
}