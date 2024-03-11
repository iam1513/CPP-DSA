#include<iostream>
using namespace std;

class Node{

    public:
    int val;//Value can be of any data type
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

void deleteSameNeighbourNode(Node* &head,Node* &tail){
    
    Node* currNode = tail->prev;//Second last node
    while(currNode != head){
        Node* prevNode = currNode->prev;

        Node* nextNode = currNode->next; 
        if(prevNode->val == nextNode->val){
          //Need to delete the current node
          prevNode->next = nextNode;
          nextNode->prev = prevNode;
          free(currNode);
        }
        currNode = prevNode;
    }

}

int main(){

    DoublyLinkedList dll;

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);

    dll.display();

    deleteSameNeighbourNode(dll.head,dll.tail);
    dll.display();
    
    return 0;
}