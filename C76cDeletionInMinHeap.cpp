#include<iostream>
using namespace std;
int const N = 1e3;

void deleteInMinHeap(int minHeap[], int &size){

        minHeap[1] = minHeap[size];
        size--;
        int curr = 1;
        while(curr*2 <= size){
            int lc = 2*curr;
            int rc = 2*curr+1;
            int mc = lc;
            if(rc <=size && minHeap[rc] < minHeap[lc]){
                mc = rc;
            }
            if(minHeap[curr] < minHeap[mc]){
                return ;
            }
            swap(minHeap[curr],minHeap[mc]);
            curr = mc;
        }
}

int main(){

    int minHeap[N] = {-1,5,10,20,30,40,50};

    int size = 6;
    deleteInMinHeap(minHeap,size);
    for(int i = 0; i <= size; i++){
        cout<<minHeap[i]<<" ";
    }

    return 0;
}