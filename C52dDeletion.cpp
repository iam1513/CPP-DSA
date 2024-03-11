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

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return ;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
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

    void insertAtPosition(int val, int k){
        //assuming k is less than equal to length
        Node* temp = head;
        int count = 1;//position of first index assumed 1
        while(count<(k-1)){
            temp = temp->next;
            count++;
        }

        //Temp will be pointing to the node at (k-1)th position
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->prev->next = new_node;//can directly write temp->next
        return ;
    }

    void deleteAtStart(){
        if(head==NULL){
            return;
        }

        Node* temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;//If dll had only one node
        }
        else{
            head->prev = NULL;
        }
        free(temp);
        return;

    }

    void deleteAtEnd(){
        if(tail==NULL){
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head = NULL;//If dll had only one node
        }
        else{
            tail->next = NULL;
        }
        free(temp);
        return;
    }

    void deleteAtPosition(int k){
        //assuming k is smaller than length of LL
        Node* temp = head;
        int count = 1;//Node at start counted as 1
        while(count<k){
            temp = temp->next;
            count++;
        }
        //Temp is pointing to node at kth position
        temp->prev->next=temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};

int main(){

    DoublyLinkedList dll;
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.insertAtStart(4);
    dll.insertAtStart(5);

    dll.display();

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);

    dll.display();

    dll.insertAtPosition(9,5);
    dll.insertAtPosition(8,7);

    dll.display();

    dll.deleteAtStart();

    dll.display();

    dll.deleteAtEnd();

    dll.display();

    dll.deleteAtPosition(6);
    dll.deleteAtPosition(6);

    dll.display();
    
    return 0;
}