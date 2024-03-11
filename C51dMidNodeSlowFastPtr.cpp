//Find middle Node - SLOW FAST PTR

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

class LinkedList{
    public:
    Node* head;
    
    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);

        if(head==NULL){
            head = new_node;
            return;
        }

        Node* temp = head;

        while(temp->next){
            temp =temp -> next;
        }
        temp -> next = new_node;
    }

        void display(){

            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp = temp->next;
            }cout<<"NULL"<<endl;
        }
    
};

Node* midNode(Node* &head){
    Node* slow = head;//Slow ptr pointing to head
    Node* fast = head;//Fast ptr pointing to head at the beginning

    while(fast && fast->next){
        slow = slow->next;//Moving 1 step forward
        fast = fast->next->next;//Moving two steps forward
    }

    return slow;
}

int main(){
     
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

    Node* midnode = midNode(ll.head);
    cout<<midnode->val<<endl;

    return 0;
}