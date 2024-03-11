#include<iostream>
#include<vector>
#include<set>
using namespace std;



int main(){

    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    
    vector<int> v(n);
    cout<<"Enter elements in the vector : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    set<int> s;
    for(auto val:v){
        s.insert(val);
    }

    auto itr = s.begin();
    itr++;
    cout<<"Second smallest number : "<<*itr<<"\n";

    return 0;
}