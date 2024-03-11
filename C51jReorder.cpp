//1->2->3->4->5->6
//Ans : 1->6->2->5->3->4

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

Node* reorderLinkedList(Node* &head){

    //Can check if LL has atleast 3 nodes

    //1.Finding mid node
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    //Now slow is pointing to mid node

    //2. Separate the linked list nd reverse second half

    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;
    while(curr){
        Node* nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }

    //3. Merging the two halves of the LL
    Node* ptr1 = head;//LL first half
    Node* ptr2 = prev;//LL second half

    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1 -> next = ptr2;
        ptr1 = ptr2;
        ptr2 =temp;
    }

    return head;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5); 
    ll.display();

    ll.head = reorderLinkedList(ll.head);
    ll.display();

    return 0;
}