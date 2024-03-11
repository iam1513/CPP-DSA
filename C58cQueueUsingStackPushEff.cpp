//T.C : O(n)
//S.C :
#include<iostream>
#include<stack>
using namespace std;

//Push efficient queue using stack
class Queue{
    stack<int> st;
public:
    Queue(){

    }

    void push(int val){//O(1)
        this->st.push(val);
    }

    void pop(){//O(n)
        if(this->st.empty()) return;
        stack<int> temp;
        while(this->st.size() > 1){
            temp.push(st.top());
            st.pop();
        }
        //Now stack size is 1, delete the element
        this->st.pop();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool isEmpty(){
        return this->st.empty();
    }

    int front(){//O(n)
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(this->st.size() > 1){
            temp.push(st.top());
            st.pop();
        }
        //Now stack size is 1, delete the element
        int res = this->st.top();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return res;
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