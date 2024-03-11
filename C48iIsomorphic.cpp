//Isomorphic : one to one mapping 
//Like add == egg,

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){

    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    if(s1.size() != s2.size()){
        return false;
    }

    for(int i=0;i<s1.size();i++){
        if(v1[s1[i]] != v2[s2[i]]){//Checking if values of characters at index i match in both vectors
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;//Storing string positions in vector for char at index i
    }

    return true;

}

int main(){
    
    string s1,s2;

    cout<<"Enter string s1: ";
    cin>>s1;

    cout<<"Enter string s2: ";
    cin>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"They are Isomorphic.";
    }
        
    else{ 
        cout<<"They are not Isomorphic.";
    }

    return 0;
}

//TC : O(length of string)
//SC : O(256) ===> Const