//Prefix/Running Sum Concept
//Array={5,4,1,2,3}----->AfterArray{5,9,10,12,15}
#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector<int> &v){
    for(int i=1;i<v.size();i++){//int i=1 coz at 0 , its 5 and we dont need to add anything in it
    v[i]+=v[i-1];
    }
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

    runningSum(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}