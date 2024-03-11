//REVERSE:REVERSE A STRING FROM STARTING PTR TO END PTR
//REVERSE(PTR1,PTR2)
//string str = "abcd";
//reverse(str.begin(),str.end());
//Time comp: O(length of string)

//SUB STRING     
//substr(position,length)

//Include algorithm to run reverse 
//Time comp : O(length)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    // string str = "Good Morning";
    // reverse(str.begin(),str.end());
    // cout<<str;

    string str = "survive";
    cout<<str.substr(1,4)<<endl; //--->urvi will be printed
    cout<<str.substr(1)<<endl;//--->urvive will be printed

    return 0; 
}