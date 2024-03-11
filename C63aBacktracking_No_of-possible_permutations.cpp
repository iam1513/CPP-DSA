#include<iostream>
using namespace std;

void permutation(string &str, int i){
    if(i == str.size()){
        cout<<str<<" ";
        return ;
    }

    for(int j = i; j < str.size(); j++){
        swap(str[i],str[j]);
        permutation(str,i+1);
        swap(str[i],str[j]);// To revert back the changes
    }
}

int main(){

    string str = "abc";
    permutation(str,0);

    return 0;
}