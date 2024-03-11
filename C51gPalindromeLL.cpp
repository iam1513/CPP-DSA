//Check LL palindrome or not.

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

bool isPalindrome(Node* head){

    //Step 1 : Finding mid Node
    Node* fast = head;
    Node* slow = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    //Now slow is pting to mid node

    //Step 2: Break the LL in the middle
    Node* curr = slow->next;
    Node* prev = slow;
    slow->next = NULL;

    //Step 3: Reverse 2nd half of the LL
    while(curr){
        Node* nextNode = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }

    //Step 4: Check if the 2 LL are equal
    Node* head1 = head;
    Node* head2 = prev;

    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();
    cout<<isPalindrome(ll.head)<<endl;

    return 0;
}