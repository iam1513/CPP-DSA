//Longest common prefix

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;


//Here we will first arrange all the strings in lexicographical order and the find common prefix between first and last string.
//This is because, first and last strng have least in common and that common prefix will be common in all.
//Set a pointer from index 0 to traverse s1 and another ptr for s2 and then check common prfx.


string longestCommonPrefix(vector<string> &str){

    //Sorting the array of strings
    sort(str.begin(),str.end());

    string s1 = str[0];//First string
    int i=0;
    string s2 = str[str.size()-1];//Last string
    int j = 0;

    string ans = "";

    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++; j++;
        }
        else{
            break;
        }
    }

    return ans;
}

int main(){
    
    int n;
    cout<<"Enter no of strings: ";
    cin>>n;

    cout<<"Enter strings"<<endl;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"Longest common prefix is '"<<longestCommonPrefix(str)<<"'."<<endl;

    return 0;
}

//TC : Sorting + while loop : O(nlogn * m[general length of the string]) + O(min of strings lenth we are comparing)===> can ignore this.