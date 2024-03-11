#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &str){
    //Keeping first string as constant and comparing it with all other strings.
    string s1 = str[0];

    int ans_length = s1.size();

    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){
            j++;
        }
        ans_length = min(ans_length,j);//Updating new length of the string
    }

    string ans = s1.substr(0,ans_length);
    return ans;
}


int main(){

    int n;
    cout<<"Enter the no of the strings: ";
    cin>>n;

    vector<string> str(n);
    cout<<"Enter strings "<<endl;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"Longest common prefix is '"<<longestCommonPrefix(str)<<"'."<<endl;

    return 0;
}

//TC : O(n * m(general length of str))
//SC : O(1)