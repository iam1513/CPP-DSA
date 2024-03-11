#include<iostream>
using namespace std;

class Stack{
    int * arr;
    int capacity;
    int top;

    public:
    Stack(int c){
        this->capacity = c;
        this->top = -1;
        arr = new int(c);
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"OVERFLOW\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"UNDERFLOW\n";
            return INT32_MIN;
        }
        this->top--;
    }

    void display(){
        while(this->top!= -1){
            cout<<arr[this->top]<<" ";
            top--;
        }
    }
};

int main(){

    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);

    st.display();

    st.pop();

    st.display();

    return 0;
}