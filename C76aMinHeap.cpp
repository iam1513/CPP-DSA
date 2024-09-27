#include<iostream>
using namespace std;
int const N = 1e3; // 1000

void insertMinHeap(int minHeap[], int &size,int val){

    size++;
    minHeap[size] = val;
    int curr = size;

    while(curr/2 > 0 and minHeap[curr/2] > minHeap[curr]){
        swap(minHeap[curr/2] , minHeap[curr]);
        curr/=2;
    }

}

int main(){

    int minHeap[N] = {-1,10,20,30,40,50};
    int val = 5;
    int size = 5;

    insertMinHeap(minHeap,size,val);

    for(int i = 0; i <= size; i++){
        cout<<minHeap[i]<<" ";
    }

    return 0;
}