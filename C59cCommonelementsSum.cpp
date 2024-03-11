#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter size of v1 : ";
    cin>>n;

    cout<<"Enter size of v2 : ";
    cin>>m;

    vector<int> v1(n);
    vector<int> v2(m);

    cout<<"Enter elements in v1 : ";
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }

    cout<<"Enter elements in v2 : ";
    for(int i=0; i<m; i++){
        cin>>v2[i];
    }

    int ans_sum = 0;

    set<int> s1;
    for(auto ele:v1){
        s1.insert(ele);
    }

    for(auto ele:v2){//Traversing v2
        if(s1.find(ele)!=s1.end()){
            ans_sum+=ele;
        }
    }

    cout<<"Ans : "<<ans_sum<<endl;
   
    return 0;
}