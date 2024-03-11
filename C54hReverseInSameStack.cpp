#include<iostream>
#include<stack>
using namespace std;

void reverseInSameStack(stack<int> &st){
    //T.C : O(N)
    //S.C : O(N)
    stack<int> temp1;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    stack<int> temp2;
    while(not temp1.empty()){
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while(not temp2.empty()){
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}

//Recursive
//T.C : O(n^2)
//S.C : O(n)

int main(){
    
    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseInSameStack(st);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }

    return 0;
}
