//It can store duplicate values
//Values will be ordered
//Value will be identified y itself and cant be modified in multiset

#include<iostream>
#include<set>
using namespace std;

//1. Insertion : O(logN)
//2. Deletion : Will erase all duplicate values O(logN)

int main(){

    multiset<int> ms1;
    multiset<int, greater<int>> ms2;//Descending
    ms1.insert(1);
    ms1.insert(3);
    ms1.insert(1);
    ms1.insert(4);

    for(auto val:ms1){
        cout<<val<<" ";
    }cout<<endl;

    ms2.insert(1);
    ms2.insert(3);
    ms2.insert(1);
    ms2.insert(4);

    for(auto val:ms2){
        cout<<val<<" ";
    }cout<<endl;

    return 0;
}