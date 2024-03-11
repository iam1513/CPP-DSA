#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]){
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                flag = true;
            swap(arr[j],arr[j+1]);
        }
        }
        if(!flag) break;
    }
}

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(n,arr);

    cout<<"The sorted array is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}