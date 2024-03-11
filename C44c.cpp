//Find first occurence of a given element x, given that the given array is sorted. 
//If no occurence of x is found then return -1.
#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &input, int target){
    int lo=0, hi=input.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        if(input[mid]==target){
            ans=mid;
            hi=mid-1;
        } else if(input[mid]>target){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return ans;
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

    
    firstOccurence(input,target);

    cout<<"First Occuence of target element is at index: "<<firstOccurence(input,target)<<endl;

    return 0;
}