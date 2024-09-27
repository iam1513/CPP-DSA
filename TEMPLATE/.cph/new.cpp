#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a){
    for(int i = 0; i < a.size()-1; i++){
        if(a[i]>a[i+1]){
return false;
        }
    }

    return true;
}

int main(){

    vector<int> v ={1,2,1,2};
int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        vector<int> temp = v;
        for(int j = i; j < v.size(); j++){
temp.erase(temp.begin()+j);
if(check(temp) == true){
    cnt++;
}
        }
    }

cout<<cnt;

    return 0;
}