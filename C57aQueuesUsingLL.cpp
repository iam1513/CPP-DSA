//Space Efficient
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class queue{
    Node* head;
    Node* tail;
    int size;

    public:
    queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enqueue(int data){
        Node* new_node = new Node(data);
        if(this->head == NULL){
            this->head = this->tail = new_node;
        }else{
            this->tail->next = new_node;
            this->tail = new_node;
        }
        this->size++;
    }

    void dequeue(){
        
        if(this->head == NULL) return;
        else{
            Node* oldHead = this->head;
            Node* newHead = this->head->next;
            this->head = newHead;
            if(this->head==NULL) this->tail = NULL;
            oldHead->next = NULL;
            delete oldHead;
            this->size--;
        }
    }

    int getsize (){
        return this->size;
    }

    bool isEmpty(){
        return this->head == NULL;
    }

    int front(){
        if(this->head==NULL) return -1;
        return this->head->val;
    }
};

int main(){

    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    qu.enqueue(50);
    qu.dequeue();

    while(not qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }

    return 0;
}