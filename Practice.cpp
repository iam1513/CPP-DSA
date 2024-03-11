#include<iostream>
#include<vector>
using namespace std;

int m = 0;

void f(vector<int> &a, int n,int ans, int sum, int idx){

    if(idx == n){
        return ;
    }

    if(ans == sum){
        m++;
        return ;
    }

    f(a,n,ans+a[idx],sum-a[idx],idx+1);
    f(a,n,ans,sum,idx+1);
}

int main(){

    vector<int> a = {1,6,8,2};
    int n = 4;

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum+=a[i];
    }

    f(a,n,0,sum,0);

    if(m>0){
        cout<<"True"<<endl;
    }

    else{
        cout<<"False"<<endl;
    }

    return 0;
}