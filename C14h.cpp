//Rotate the given array 'a' by k steps, where k is non-negative .[K can be greater than n as well where n is the size of array 'a'.]
//Method 2: By 'NOT' making a new array to store values
//Using Vectors

#include<iostream>
#include <bits/stdc++.h>//Including this wont show error compiling reverse function.
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for (int a:v){
       cout<<a<<" "; 
    }
   
    cout<<endl;

    return 0;
   
}