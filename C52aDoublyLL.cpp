#include<iostream>
using namespace std;

class Node{

    public:
    int val;//Value can be of any data typr
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }

};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
};

int main(){

    Node* new_node = new Node(3);

    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->val<<endl;

    return 0;
}