#include<iostream>
using namespace std;

/*

USING RECURSION

int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i = 1; i < n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count>2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}*/

bool chkprime(int n,int i){
    if(n<=2) return (n == 2)? true : false ;
    if(n%i == 0) return false;
    if(i*i > n) return true;
    return chkprime(n,i+1);

}

int main(){
    int n;
    cin>>n;
    if(chkprime(n,2))
   {
       cout<<"Yes";
   }else{
       cout<<"No";
   }

    return 0;
}