#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> a = {-5,-4,-1,-2};

    int maxi = a[0],m = a[0], mini=a[0],temp=0;

    for(int i = 1; i < 4; i++){
        if(a[i]>0){
            maxi = max(a[i],maxi*a[i]);
            mini = min(a[i],mini*a[i]);
        }
        else if(a[i] == 0){
            maxi = mini = 0;
        }
        else{
            temp = maxi;
            maxi= max(a[i],mini*a[i]);
            mini = min(a[i],temp*a[i]);
        }

        m = max(m, maxi);
    } 

    cout<<m;

    return 0;
}
