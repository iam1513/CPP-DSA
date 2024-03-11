//Given an array of integers 'a' that is sorted in non dec order.
//Find the first and the last pos of the given target element in the sorted aray.
//Follow 0 based indexing.
//If target not found return -1,-1.
#include<iostream>
#include<vector>
using namespace std;

int fOcc(vector<int> &input,int target){
  int lo=0,hi=input.size()-1;
    int ans=-1;
    while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(input[mid]==target){
            ans = mid;
            hi=mid-1;
        }
    else if(input[mid]>target){
        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
    }
    return ans;
}

int lOcc(vector<int> &input,int target){
  int lo=0,hi=input.size()-1;
    int ans=-1;
    while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(input[mid]==target){
            ans = mid;
            lo=mid+1;
        }
    else if(input[mid]>target){
        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
    }
    return ans;
}

int main(){
  vector<int> input;
  int n;
  cout<<"Enter no. of elements: ";
  cin>>n;

  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    input.push_back(ele);
  }

  int target;
  cout<<"Enter the element whose index is needed: ";
  cin>>target;

  fOcc(input,target);
  lOcc(input,target);

  cout<<"First occurence of the element is at index: "<<fOcc(input,target)<<" and "
  <<"last occurence of the element is at index: "<<lOcc(input,target);

  return 0;
}