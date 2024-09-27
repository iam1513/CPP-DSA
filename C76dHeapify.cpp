#include<iostream>
using namespace std;
int const N = 1e3;

void heapifyToMinHeap(int arr[], int &size, int curr){
    while(curr*2 <= size){
        int lc = curr*2;
        int rc = curr*2+1;
        int mc = lc;

        if(rc <= size && arr[lc] > arr[rc]){
            mc = rc;
        }

        if(arr[mc] > arr[curr]){
            return ;
        }

        swap(arr[curr],arr[mc]);
        curr = mc;
    }
}

int main(){

    int arr[] = {-1,60,10,80,50,5,20,70};
    int size = 7;

    for(int i = size/2; i > 0; i--){
        heapifyToMinHeap(arr,size,i);
    }

    for(int i = 0;i <= size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}