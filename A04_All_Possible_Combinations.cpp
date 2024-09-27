#include<iostream>
#include<vector>
using namespace std;

void f(int idx, vector<vector<int>> &ans,vector<int> &v){
    if(idx == v.size()){
        ans.push_back(v);
        return ;
    }

    for(int j = idx ; j < v.size(); j++){
        swap(v[idx],v[j]);
        f(idx+1,ans,v);
        swap(v[idx],v[j]);
    }
}

int main(){

    vector<int> v = {1,2,3};
    vector<vector<int>> ans;

    f(0,ans, v);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}