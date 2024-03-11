// ARMSTRONG NUMBER

#include<iostream>
using namespace std;

bool f(int x, int &temp, int cnt){

    if(cnt == 0){
        return true;
    }

    if(cnt<0 || temp == 0){
        return false;
    }
    
    temp/=10;
    return f(x,temp,x-((temp%10)*(temp%10)*(temp%10)));


}

int main(){
    int n = 153;
    int temp = n;
    cout<<f(n,temp,20);

    return 0;
}

// f(n) ---> will return true if the no is armstong else false
// 