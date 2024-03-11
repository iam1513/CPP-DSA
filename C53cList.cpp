//include list to compile list
#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list<int> l1 = {1,2,3,4,5};
    auto itr = l1.begin();//instead of list<int>::iterator itr
    cout<<"First element : ";
    cout<<*itr<<endl;//itr is a ptr

    //Traversal in a list
    cout<<"Way one : ";
    for(auto num: l1){
        cout<<num<<" ";
    }cout<<endl;

    cout<<"Way two : ";
    for(auto itr = l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    return 0;
}