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

int idxOfTarget(int arr[],int n,int target,int min){
    
}

int main(){
    int arr[]={4,5,6,7,1,2,3};
    int n=7;

    int target=2;

    int min = idxOfMin(arr,n);

    cout<<idxOfTarget(arr,n,target,min)<<" ";

    return 0;
}