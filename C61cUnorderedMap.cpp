/*
       ---> STL container , stores key-value pairs
       ---> Elements are not ordered
       ---> Keys will be unique

       Insertion, deletion and retrieval ===> T.C : O(1) ===> In Avg case and in O(n) in worst case as we knoe in hashing if collision happens ,we need to traverse whole linked list
       In ordered map ===> T.C : O(logn)

       Therefore, its more efficient
       
       ---> Implemented using concept of hashing
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int , string> record;
    // Roll no. and names

    record.insert(make_pair(3,"ria"));
    record[1] = "bali";
    record[2] = "animesh";
    // record[3] = "prachi"; ---> ria will be changed to prachi
    // record.insert(make_pair(3,"prachi")); ---> ria will remain same and wont be changed , so use above if u have to update values

    for(auto pair:record){
        cout<<"Roll no - "<<pair.first<<endl;
        cout<<"Name - "<<pair.second<<endl;
    }cout<<endl;

    return 0;
}