#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &v){
    int n = v.size();
    int max = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    
    //Calculate freq array
    vector<int> freq(max+1,0);
    for(int i = 0; i < n; i++){
        freq[v[i]]++;
    }

    //Calculate cumulative array
    for(int i = 1; i <= max; i++){
        freq[i]+=freq[i-1];
    }

    //Calculate the sorted array
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }

    //Copy back the ans array to the original array
    for(int i = 0; i < n; i++){
        v[i]=ans[i];
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    countSort(v);

    for(int  i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
  
    return 0;
}