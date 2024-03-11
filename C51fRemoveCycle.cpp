//FLOYD's ALGO

//Remove cyclye

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

bool detectCycle(Node* head){

    if(!head){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<slow->val<<endl;
            return true;
        }
    }

    return false;
}

void removeCycle(Node* &head){//Function is called assuming LL has a cycle
    Node* slow = head;
    Node* fast = head;

    do{// Pointers will move 1 and 2 steps respectively as both are pointing to head, condition should not become true at first
        slow = slow->next;
        fast = fast -> next -> next;
    } while(slow!=fast);

    fast = head;

    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast -> next;
    }

    slow->next = NULL;

}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    ll.display();

    ll.head->next->next->next->next->next->next->next = ll.head->next->next;

    cout<<detectCycle(ll.head)<<endl;
    removeCycle(ll.head);
    cout<<"After removing cycle: ";
    ll.display();

    return 0;
}