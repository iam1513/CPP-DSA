//Find the square root of the given non negative value x. 
//Round it off to the nearest floor integer value.
#include<iostream>
#include<vector>
using namespace std;

int sqrt(int x){
  int lo=1,hi=x;
  int ans =-1;
  while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(mid*mid<=x){
      ans=mid;
      lo=mid+1;
    }else{
      hi=mid-1;
    }
  }
return ans;
}

int main(){
    cout<<sqrt(24)<<endl;

    return 0;
}