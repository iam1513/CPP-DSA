#include<iostream>
#include<vector>
using namespace std;

void smallestNum(int s,  int d){
    if(d*9 < s) {
        cout<<"-1";
        return ;
    }

    vector<char> v(d,'0');
    
    s--;
    int i;

    for( i = d-1; i>=0;i--){
        if(s<9) break;
        v[i] = '9';
        s-=9;
    }

    v[0] = '1';
    v[i] = s + '0';

    for(int i = 0 ; i < d; i++){
        cout<<v[i];    }
    

}

int main(){

    int s,d;
    cin>>s>>d;

    smallestNum(s,d);

    return 0;
}