//Using recursion
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &input,int target, int lo, int hi){
    if(lo>hi) return -1;
    
    int mid=lo+(hi-lo)/2;//Check in notebook - Modified mid to counter overflow

    if(input[mid]==target) return mid;

    if(input[mid]<target) return BinarySearch(input,target,mid+1,hi);

    else  return BinarySearch(input,target,lo,mid-1);
}

int main(){
    int n;
    cout<<"No of elements: ";
    cin>>n;
    vector<int> input;

    cout<<"Elements are: ";
   
    for(int i=0; i<n;i++){
       int ele;
       cin>>ele;
       input.push_back(ele);
    }

    int target;
    cout<<"Target: ";
    cin>>target;

    
    BinarySearch(input,target,0,n-1);
    
    cout<<"Element we needed is present at index: "<<BinarySearch(input,target,0,n-1)<<endl;

    return 0;
}