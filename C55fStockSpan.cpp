#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int> st;//Index
    st.push(0);
    for(int i = 1; i < n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            output[st.top()] = n - i - 1;
            st.pop();
        }
        st.push(i);
    }
    
        while(not st.empty()){
            output[st.top()] = -1;
            st.pop();

        }
        reverse(output.begin(),output.end());
        return output;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;

    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> res = nge(v);

    for(int i = 0; i< res.size();i++){
        cout<<i-res[i]<<" ";
    }


    return 0;
}