#include<iostream>
using namespace std;
int const N = 1e3; // 1000

void insertMinHeap(int maxHeap[], int &size,int val){

    size++;
    maxHeap[size] = val;
    int curr = size;

    while(curr/2 > 0 and maxHeap[curr/2] < maxHeap[curr]){
        swap(maxHeap[curr/2] , maxHeap[curr]);
        curr/=2;
    }

}

int main(){

    int maxHeap[N] = {-1,10,20,30,40,50};
    int val = 100;
    int size = 5;

    insertMinHeap(maxHeap,size,val);

    for(int i = 0; i <= size; i++){
        cout<<maxHeap[i]<<" ";
    }

    return 0;
}