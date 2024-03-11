/*
        Map in C++ STL
        ---> STL container which stores key-value pairs

        ---> The elements are stored in ascending / descending order(ascending by default)

        ---> Maps can not have duplicate keys

        ---> Maps in C++ are implemented through binary search tree

        * Header file #include<map>

        * Declaration  map<key_datatype, value_datatype> map_name

        * Initialization  map<datatype1,datatype2> mapname = {{key1,val1},{key2,val2},{key3,val3}}

        * Insertion : mapname.insert(make-pair{key,val})

        * Printing for each loop
        for(auto element : map1){
            key = element.first
            val = element.second
        }

        * erase
        ---> m.erase(itr)   TC: O(nlogn)
        ---> m.erase(key)
        ---> m.erase(start_itr,end_itr)

        * swap() ---> m1 and m2 are of same data type  m1.swap(m2) or swap(m1,m2)

        * m.clear() ---> Clears the map

        * empty() ---> Return 1 if empty

        * size() -->  Maps are dynamic so we can find max_size()

        * find() ---> returns iterator to element m.find(key) ---> if key isnt present, map.end() will be returned

        * count() ---> no. of occurences of a key only 1 as duplicate values arent present

        * upper_bound ---> the next greater element

        * lower_bound ---> the next greater element

        * begin() and end()

        * rbegin() and rend()    

*/

#include<iostream>
#include<map>
using namespace std;



int main(){

    map<string,int> directory;
    directory["naman"] = 3819;
    directory["animesh"] = 7429;
    directory["karan"] = 742949;

    for(auto element:directory){
        cout<<"Name - "<<element.first<<endl;
        cout<<"Phone no. - "<<element.second<<endl;
    }cout<<endl;

    directory.insert(make_pair("ritu",25628));

    // for(auto element:directory){
    //     cout<<"Name - "<<element.first<<endl;
    //     cout<<"Phone no. - "<<element.second<<endl;
    // }

    map<string,int>:: reverse_iterator itr;//To make iterator reverse
    cout<<"In reverse order : "<<endl;
    for(itr = directory.rbegin(); itr!= directory.rend(); itr++){
        cout<<itr->first<<"_ "<<itr->second<<endl;    }

    return 0;
}