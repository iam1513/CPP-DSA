//Given an array of n integers and a target value x. Print whether x exits in the array or not.
#include<iostream>
using namespace std;
/*

USING ITERATION

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    bool sortedflag=false;

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            sortedflag=true;
            break;
        }
    }

    if(sortedflag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}*/

bool f(int *arr, int n, int i, int x){
    if(i == n) return false;//Array is exhausted as no value left in the array
    return(arr[i] == x)  || f(arr,n,i+1,x);
}

int main(){
    int n = 10; 
    int x = 14;
    int arr[] = {5,14,1,8,6,-9,8,2,3,15};

    bool result = f(arr,n,0,x);
    if(result) cout<<"YES";
    else cout<<"NO";
    return 0;
}