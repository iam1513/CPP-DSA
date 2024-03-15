#include<iostream>
#include<vector>
using namespace std;

void f(int idx, vector<int> a, vector<int> v, vector<vector<int>> &ans){

    if(idx == a.size()){
        return ;
    }

    for(int i = idx;i < a.size(); i++){
        v.push_back(a[i]);
        ans.push_back(v);
        f(i+1,a,v,ans);
        v.pop_back();
    }
}

int main(){

    vector<int> a = {1,2,3};
    vector<vector<int>> ans;
    vector<int> v;
    ans.push_back({});
    f(0,a,v,ans);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}