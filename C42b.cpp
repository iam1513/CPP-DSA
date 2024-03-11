#include<iostream>
using namespace std;

void sort(int arr1[],int n,int arr2[],int m,int arr[]){
    int a=0;
    int b=0;
    int i=0;

    while(a<n && b<m){
        if(arr1[a] < arr2[b]){
            arr[i]=arr1[a];
            i++;
            a++;
        }
        else{
            arr[i]=arr2[b];
            i++;
            b++;
        }
    }

    while(a<n){
        arr[i]=arr1[a];
            i++;
            a++;
    }
    while(b<m){
        arr[i]=arr2[b];
            i++;
            b++;
    }
}

int main(){
    int arr1[] = {5,8,10};
    int arr2[] = {2,7,8};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int arr[n+m];
    
    sort(arr1,n,arr2,m,arr);

    for(int i=0;i<(n+m);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}