#include<iostream>
#include<cstring>
using namespace std;

void selectionSort(char fruit[][60], int n){
    for(int i = 0; i < n-1; i++){
        //Find the min element
        int min_idx = i;
        for(int j = i+1; i <n; j++){
            if(strcmp(fruit[min_idx],fruit[j]) > 0 ){
                min_idx = j;
            }
        }

        //Place the min element at the beginning
        if(i!=min_idx){
            swap(fruit[i],fruit[min_idx]);
        }
    }
    return ;
}

int main(){
    char fruit[][60] ={"papaya","lime","watermelon","apple","mango","kiwi"};

    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectionSort(fruit,n);

    for(int i = 0; i < n; i++){
        cout<<fruit[i]<<" ";
    }
    return 0;
} 