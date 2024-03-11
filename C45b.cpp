//A rotated sorted array prob
#include<iostream>
using namespace std;

int idxOfMin(int arr[],int n){
    int lo=0,hi=n-1;
    int ans = INT32_MAX;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[lo]>arr[hi]){
            lo=mid+1;
            if(arr[mid]<ans){
                ans=mid;
            }
        }
        else{
            hi=mid-1;
            if(arr[mid]<ans){
                ans=mid;
            }
        }
    }
    return ans;
}

int main(){
    int arr[]={7,2,3,4,5,6};
    int n=6;

    int ans = idxOfMin(arr,n);

    cout<<ans;

    return 0;
}