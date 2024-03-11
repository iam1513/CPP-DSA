#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int f(int n){
    if(n == 0 or n==1) return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n] = f(n-1) + f(n-2);
}

int main(){

    dp.resize(5+1,-1);      
    cout<<f(5);
    
    

    return 0;
}