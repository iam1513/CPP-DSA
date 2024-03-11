/*
    --> Values are stored in unordered fashion.

    insertion,deletion,search ---> T.C : O(1)-->Avg. time comp.
*/
#include<iostream>
#include<unordered_set>
using namespace std;

//1.Insertion : Single element -> O(1) --> avg and O(N) --> worst
//            : n elements -> O(n) --> avg and O(n*NH)-->worst(NH -> No. of unordered sets)

//2. Deletion : same as insertion

//3. Find and count : Same as insertion

//4. Load factor : size of unordered set / bucket-count(hashing)

//5. Rehash(x) : sets no of buckets to x or more (TC: O(n) and O(n^2))


int main(){

    unordered_set<int> s1;

    s1.insert(3);
    s1.insert(7);
    s1.insert(1);
    s1.insert(7);

    for(auto val:s1){
        cout<<val<<" ";
    }cout<<endl;

    return 0;
}