#include<iostream>
#include<stack>
using namespace std;

void RemoveFromBottom(stack<int> &st){
    stack<int> temp;
    while(st.size()!=1){
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

//Recursively
void f(stack<int> &st){
    if(st.size()==1){
        st.pop();
        return;
    }

    int curr = st.top();
    st.pop();
    f(st);
    st.push(curr);

}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // RemoveFromBottom(st);
    f(st);
    f(st);

    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }

    return 0;
}