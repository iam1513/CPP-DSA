//Selection Sort
//Continuously find minimum element from the array and bring it in front

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v){
    int n = v.size();
    
    for(int i=0;i<n;i++){
        int min_idx=i;
        //Finding minimum element 
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx]){
                min_idx=j;
            }
        }
        
        //Placing the smallest element at beginning
        if(i!=min_idx){
            swap(v[i],v[min_idx]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of the vector: ";
    cin>>n;

    //Declare vector
    vector<int> v(n);

    // Take elements as input in the vector
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //Make a function call
    selectionSort(v);

    //Print the sorted array
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// void selectionSort(int n,int arr[]){

//     for (int i=0;i<n;i++){

//         int min_idx = i;

//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
        
//         if(i!=min_idx){
//             swap(arr[i],arr[min_idx]);
//         }
//     }
// }

// int main(){

//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     selectionSort(n,arr);

//     cout<<"The sorted array is: ";

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }