// 1. There is not need to transform string by movinng characters
// 2. Each character should be present in multiple of length of an array

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canMakeEqual(vector<string> &v){
     
    unordered_map<char,int> m;
    for(auto str:v){//Traversing all strings
        for(char c:str){//Traversing all characters inside the strings
            m[c]++;
        }
    }

    int n = v.size();
    for(auto ele:m){
        if(ele.second%n!=0){
            return false;
        }
    }

    return true;
}

int main(){

    int n;
    cout<<"Enetr length of a vector : ";
    cin>>n;

    vector<string> v(n);
    cout<<"Enter elements in the array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<(canMakeEqual(v)?"YES":"NO")<<endl;

    return 0;
}