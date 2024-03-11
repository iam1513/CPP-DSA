//T.C : O(n)
//S.C :
#include<iostream>
#include<stack>
using namespace std;

//Pop efficient queue using stack
class Queue{
    stack<int> st;
public:
    Queue(){

    }

    void push(int val){//T.C : O(n)
        stack<int> temp;
        while(not this->st.empty()){
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(val);
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    void pop(){
        if(this->st.empty()) return;
        this->st.pop();
    }

    bool isEmpty(){
        return this->st.empty();
    }

    int front(){
        if(this->st.empty()) return INT32_MIN;
        return this->st.top();
    }
};

int main(){

    Queue qu;
    qu.push(10);//Enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();//Dequeue
    qu.pop();

    while(not qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }

    return 0;
}