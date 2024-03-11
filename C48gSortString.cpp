#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

string countSort(string str){

    vector<int> freq(26,0);

    //Adding freq of every character in the string
    for(int i=0;i<str.length();i++){
        int index = str[i]- 'a';
        freq[index]++;
    }

    //Create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main(){
    
    string str;
    cin>>str;

    cout<<countSort(str)<<endl;
    
    return 0;
}

//TC : O(length of array)
//SC : O(26) ===> Const.