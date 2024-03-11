#include<iostream>
#include<vector>
using namespace std;

void findTheMidNum(vector<int> &v){
    int m=v[i];
    int idx=-1;

    for(int i=0;i<m)
}

int main(){

    int n;
    cin>>n;
    
    vector<int> v;

    for(int i=0 ; i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    findTheMidNum(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}