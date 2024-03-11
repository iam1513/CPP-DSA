#include<iostream>
using namespace std;

int sumofn(int n){
    int ans = 0;
    if(n == 1){
        ans++;
        return ans;
    }
    ans += n + sumofn(n-1);
    return ans;
}

int rec(int n,int m){
    if (m == 1) {
        return sumofn(n);
        }
    int sum = rec(n,m-1);
    return sumofn(sum);
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<rec(n,m);

    return 0;
} 