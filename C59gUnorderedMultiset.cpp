#include<iostream>
#include<unordered_set>
using namespace std;

//Same as unordered set

int main(){

    unordered_multiset<int> ms1;

    ms1.insert(4);
    ms1.insert(8);
    ms1.insert(1);
    ms1.insert(4);
    ms1.insert(7);
    ms1.insert(8);

    for(auto val: ms1){
        cout<<val<<" ";
    }cout<<endl;

    return 0;
}