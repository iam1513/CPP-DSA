#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int> st;//Dont need to give it size, so cant check overflow condition as we dont know the size
    //st.pop():-Stack is empty so its underflow condition. When we run it , it will show some type of fault
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;

    return 0;
}