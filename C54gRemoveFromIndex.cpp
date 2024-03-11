#include<iostream>
#include<stack>
using namespace std;

void f(stack<int> &st,int idx){
    stack<int> temp;
    int n = st.size();
    int count = 0;
    while(count < n - idx - 1 ){
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){
   
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    f(st,0);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }

    return 0;
}