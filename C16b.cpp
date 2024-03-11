//Check if we cam partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array.
//Subarray--->Part of the array
#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum  = total_sum - prefix_sum;
        
        if(suffix_sum==prefix_sum){
            return true;
        }
    }return false;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<checkPrefixSuffixSum(v)<<endl;

    return 0;
}