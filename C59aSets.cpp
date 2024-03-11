/*
    WHAT IS A SET?
    --> STL container used to store unique values.
    --> Values are stored in ordered state(increasing or decreasing).
    --> No indexing , elements are identified by their own values.
    --> Once value is inserted in a set , it cant be modified.

    ADV :
    --> Unique values
    --> Ordered
    --> Dynamic size, no overflowing errors
    --> Faster

    DIS ADV :
    --> Cannot access elements using indexing
    --> more memory than array
    --> Not suitable for large data sets

    DECLARATION OF A SET
    #include<set>
    set<dtaatype> setname; ==> set<int> set1 = {1,2,3,4,5};

    --> By default values are stored in increasing order

    set<datatype,greater<datatype>>setname; ===> To make it in Decreasing order

*/
#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> set1;
    
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);

    cout<<"Size of set is : "<<set1.size()<<endl;

    set1.insert(3);

    cout<<"Size of set after a duplicate element is inserted is : "<<set1.size()<<endl;//size wont changee if duplicate element is added

    //Traversing a set
    set<int>::iterator itr;
    cout<<"Set in increasing order is : ";
    // for(itr = set1.begin(); itr!=set1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    set<int, greater<int>> set2;
    set2.insert(3);
    set2.insert(2);
    set2.insert(1);
    set2.insert(4);

    cout<<"Set in decreasing order is : ";

    for(auto value:set2){
        cout<<value<<" ";
    }cout<<endl;

    //Deleting elements from a set
    //1.setmame.erase(value)   2.setmame.erase(position)   3.setmame.erase(start_pos,end_pos) ==>delete all elements including start excluding end
    cout<<"Set in increasing order after 1 erase is : ";
    set1.erase(4);
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    //MEMBER FUNCTIONS OF A SET CONTAINER
    /*
        max_size() --> Max no of elements set can hold
        empty() --> returns true if empty else false
        clear() --> removes all elements from set
        find() --> returns position of element if present , else returns end iterator
        count() --> returns no. of ocuurrences of an element
        lower_bound() --> returns element if present else returns just greater value
        upper_bound() --> returns the next greater value
        rbegin() --> returns iterator to first element in reverse order
        rend() --> returns iterattor to position after last element in reverse order
    */
   if(set1.find(4)!=set1.end()){
    cout<<"Value is present"<<endl;
   }
   else{
    cout<<"Value is not present"<<endl;
   }

    return 0;
}