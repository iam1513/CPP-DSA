//Integers in non decreasing order , sort there squares in non decreasing order
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void sortedSquaredArray(vector<int> &v){

    vector<int> ans;

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<=right_ptr){
        if(v[left_ptr]<v[right_ptr]){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    };



    for(int i=0; i<v.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    return ;
}

int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortedSquaredArray(v);

    return 0;
}