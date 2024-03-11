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

class circularLL{
    public:
    Node* head;

    circularLL(){
        head = NULL;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node ->next = head;
            return;
        }
        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;

        }
        //Now tail is pointing to the last node
        tail -> next = new_node;
        new_node -> next = head;
        head = new_node;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            new_node = head;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail -> next = new_node;
        new_node->next = head;
    }

    void display(){
        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp!=head);
        cout<<endl;
    }

    void printCll(){
        Node* temp = head;
        for(int i = 0;i<15;i++){
            cout<<temp->val<<"->";
            temp = temp -> next;
        }cout<<endl;
    }

};

int main(){

    circularLL cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);

    cll.display();
    cll.printCll();

    cll.insertAtEnd(9);
    cll.display();
    cll.printCll();

    return 0;
}