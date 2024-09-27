#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v= {1, 3,5,2,2};

    int right_sum = 0,left_sum = 0;
    int idx = 0; int max_sum = 0;

    for(int i = 0; i < v.size(); i++){
        right_sum+=v[i];
    }

    for(int i = 0; i < v.size(); i++){
        right_sum -= v[i];
        if(left_sum == right_sum){
            max_sum = max(max_sum,left_sum);
        }
        left_sum += v[i];
    }

    cout<<max_sum;

    return 0;
}