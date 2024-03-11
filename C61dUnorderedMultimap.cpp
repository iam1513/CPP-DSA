/*
    ---> STL container, stores key value pairs
    ---> elements are not ordered
    ---> duplicate keys are allowed
    
    Insertion, Deletion and search ---> T.C : O(1) ===> in average case

    m.equal_range --> returns bounds of range of elements with key passed
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_multimap<string , int> fruitcount;

    fruitcount.insert(make_pair("apple",6));
    fruitcount.insert(make_pair("banana",4));
    fruitcount.insert(make_pair("apple",3));
    fruitcount.insert(make_pair("melon",9));

    for(auto pair:fruitcount){
        cout<<"Fruit - "<<pair.first<<endl;
        cout<<"Count - "<<pair.second<<endl;
    }

    return 0;
}