#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);

    stack<int> st;
    while(not input.empty()){
        st.push(input.front());
        input.pop();
    }

    while(not st.empty()){
        input.push(st.top());
        st.pop();
    }

    while(not input.empty()){
        cout<<input.front()<<" ";
        input.pop();
    }

    return 0;
}