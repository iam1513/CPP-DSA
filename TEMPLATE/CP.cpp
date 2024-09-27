#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &nums){
     int maxi = *max_element(nums.begin(),nums.end());

     vector<int> temp(maxi+1,0);

     for(int  i =0; i < nums.size(); i++){
        temp[nums[i]]++;
     }

    
     int maxe = 0;
     for(int i = 0; i <= maxi; i++){
        maxe = max(temp[i],maxe);
     }

     return nums.size() - maxe;
}

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        int ans;
        while(n--){
            int j;cin>>j;
            nums.push_back(j);
            
        }
        ans = func(nums);
        cout<<ans<<endl;
    }
    

    return 0;
}