/*
    ---> STL containers stores key-value pairs
    ---> elements are stored in an order ascending/descending
    ---> duplicate keys are allowed

    Insertion , deletion and search ---> T.C : O(logn)
*/
#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<string, int> directory;

    directory.insert(make_pair("urvi", 618293));
    directory.insert(make_pair("prachi", 681293));
    directory.insert(make_pair("prachi", 714293));//Both no's of prachi will be added
    //directory[""] = 1397; ===> Will through error as its not allowed in multimap

    for(auto pair:directory){
        cout<<"Name : "<<pair.first<<endl;
        cout<<"Phone no. : "<<pair.second<<endl;
    }


    return 0;
}