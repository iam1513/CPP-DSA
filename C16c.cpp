//Given an arrsy of integers of size n. Answer q queries where you need to print the sum of values in a given range that indices from l to r(both included)
//1-based indexing
#include<iostream>
#include<vector>
using namespace std;

void sumOfTheQueriesInTheRangeGiven(vector<int> &v){
    
    
}

int main(){

    int n;
    cin>>n;
    
    vector<int> v(n-1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //Calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){

        int l;
        int r;
        cin>>l;
        cin>>r;
        int ans=0;
        ans= v[r]-v[l-1];
        cout<<ans<<endl;
    }

    return 0;
}