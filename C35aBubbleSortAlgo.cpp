/*#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v){
    int n = v.size();
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n - i -1; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }

    return ; 
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0;  i < n ; i++){
        cin>>v[i];
    }

    bubbleSort(v);

    for(int i = 0; i < n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}*/

//Bubble Sort Algo 
//Compare two adjacent elements and use swap to swap them
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }}
    }
}

int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;

    int num[n];//Declaration of array of length n

    //Taking elements in array as input

    cout<<"Enter "<<n<<" elements in array: ";

    for(int i=0;i<n;i++){
        cin>>num[i];
    } 

    //Make a function call

    bubbleSort(num,n);

    //Print sorted array 
    cout<<"Sorted array is: ";
    for (int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }

    return 0;
}