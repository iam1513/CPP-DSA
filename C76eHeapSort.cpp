#include<iostream>
using namespace std;
int const N = 1e3;

void heapify(int arr[],int curr, int &n){
    while(2*curr <= n){
        int lc = 2*curr;
        int rc = 2*curr +1;
        int mc =lc;

        if(rc<=n && arr[rc] > arr[mc]){
            mc = rc;
        }

        if(arr[curr] >= arr[mc]){
            return;
        }

        swap(arr[curr],arr[mc]);
        curr = mc;
    }
}

void deleteAndSort(int arr[],int &n){
    swap(arr[1],arr[n]);
    n--;
    heapify(arr,1,n);
}

void heapSort(int arr[],int n){
    // 1. Heapify the arr
    for(int i = n/2;i>0;i--){
        heapify(arr,i,n);
    }

    // 2. Delete and bring to the back
    while(n>0){
        deleteAndSort(arr,n);
    }
}

int main(){

    int arr[N] = {-1,60,10,80,50,5,20,70};
    int n = 7,x=7; // We will lose n so keep a temp to be aware of size

    heapSort(arr,n); //  or dont take it by ref in this function

    for(int i=1; i <=n; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}