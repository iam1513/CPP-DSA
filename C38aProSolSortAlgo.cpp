#include<iostream>
#include<vector>
using namespace std;

/*
void sortZeroesToEnd(vector<int> &v){
    int n =v.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[j] == 0 && v[j+1]!= 0){
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

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    sortZeroesToEnd(v);

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
*/

//OPTIMIZED

void bubbleSort(vector<int> &v){
    int n = v.size();
        for(int i = n-1; i>=0; i--){
        int j = 0;
        bool flag = false;
        while(j!=i){
            if(v[j] == 0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag = true;
            }
            j++;
        }

        if(!flag) break;
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
}