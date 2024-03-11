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

bool isPalindromeDll(Node* head, Node* tail){
    while(head!=tail && tail!=head->prev){//tail crossed head
        if(head->val!=tail->val){
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;

}

int main(){

    DoublyLinkedList dll;

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);

    dll.display();

    cout<<isPalindromeDll(dll.head,dll.tail)<<endl;
    
    return 0;
}