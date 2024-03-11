#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currsize;
    public:
    Stack(int c){
        this->capacity = c;
        this->currsize=0;
        head = NULL;
    }

    bool isEmpty(){
        return this->head == NULL;
    }

    bool isFull(){
        return this->currsize = this->capacity;
    }

    void push(int data){

        if(this->currsize == this->capacity){
            cout<<"Overflow\n";
            return;
        }

        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currsize++;
    }

    int pop(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT32_MIN;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = new_head;
        return result;
    }

    int getTop(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT32_MIN;
        }
        return this->head->data;
    }

    int size(){
        return this->currsize;
    }
};

int main(){
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.getTop()<<endl;
    s1.push(4);
    s1.pop();
    cout<<s1.getTop()<<endl;

    return 0;
}