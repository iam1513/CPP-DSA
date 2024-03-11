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

    void insertAtEnd(int val){

        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return ;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};

void reverseDll(Node* &head, Node* &tail){//Ref coz we will be making change to linkd list itself 
    Node* currPtr = head;
    while(currPtr){
        Node* nextPtr = currPtr->next;//We stored it in next ptr coz we will change the link of currPtr->next 
        currPtr->next = currPtr->prev;
        currPtr->prev = nextPtr;
        currPtr = nextPtr;
    }

    //Swapping head and tail ptr
    Node* new_head = tail;
    tail = head;
    head = new_head;
     
}

int main(){

    DoublyLinkedList dll;

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);

    dll.display();

    reverseDll(dll.head,dll.tail);

    dll.display();
    
    return 0;
}