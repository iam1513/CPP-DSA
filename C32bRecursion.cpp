//Armstrong num prob
#include<iostream>
using namespace std;

int pow_recursive(int p, int q){
    if (q == 0 ) return 1;//Base case

    if(q%2==0){
        //q is even
        int result = pow_recursive(p,q/2);
        return result * result;
    }
    else{
        //q is odd
        int  result = pow_recursive(p,(q-1)/2);
        return p * result * result;
    }
}

int f(int n,int d){
   //Base case
   if(n == 0) return 0;
   return pow_recursive(n%10,d)+f(n/10,d);

}

int main(){
    int n;
    cin>>n;

    int d = 0;
    int temp = n;
    while(temp>0){
        d++;
        temp = temp/10;
    }

    int result = f(n,d);
    if (result == n){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    return 0;
}