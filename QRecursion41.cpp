#include<iostream>
using namespace std;

int prod(int x, int y){
    if(y== 1) return x;
    return x + prod(x,y-1);
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<prod(x,y);
    return 0;
}