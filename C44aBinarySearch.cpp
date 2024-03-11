#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &input, int target){
    //Define search space
    int lo=0;//Start of search array
    int hi=input.size()-1;//End of search space
    while(lo<=hi){
        //Calc midpoint for the search space 
        int mid=lo+(hi-lo)/2;//Check in notebook - Modified mid to counter overflow
        if(input[mid]==target) return mid;
        else if(input[mid]<target){
            //Discard left part
            lo=mid+1;
        }
        else{
            //Discard right part
            hi =mid-1;
        }
    }
    return -1;
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

    
    BinarySearch(input,target);

    cout<<"Element we needed is present at index: "<<BinarySearch(input,target)<<endl;

    return 0;
}