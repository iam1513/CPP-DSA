#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bucketSort(float arr[], int n){
    vector<float> b[n];//Empty vector of n buckets

    //Put array in elements in different buckets
    for(int i=0;i<n;i++){
        int bi=n*arr[i];
        b[bi].push_back(arr[i]);
    }

    //Sort individual buckets
    for(int i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());
    }

    //Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];

}

//Driver program
int main(){
    float arr[] = {0.32,0.12,0.76,0.74,0.24};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}