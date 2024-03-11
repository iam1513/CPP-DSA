#include<iostream>
#include<vector>
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

bool isCriticalPoint(Node* &currNode){
    if(currNode->prev->val < currNode->val && currNode->next->val < currNode->val){//Local max
            return true;
    }
    if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){//Local min
            return true;
    }

    return false;
}

vector<int> distanceBetweenCriticalPoints(Node* head, Node* tail){
    vector<int> ans(2,INT32_MAX);
    int firstCP = -1, lastCP = -1;

    Node* currNode = tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int currPos = 0;

    while(currNode->prev){
        if(isCriticalPoint(currNode)){
            if(firstCP==-1){
                firstCP = lastCP = currPos;
            }
            else{
                ans[0] = min(ans[0],currPos-lastCP);//Min distance
                ans[1] = currPos - firstCP;//Max distance
            }
        }
        currPos++;
        currNode = currNode -> prev;
    }

    if(ans[0]==INT32_MAX){
        ans[0] = ans[1] = -1;
    }

    return ans;

}

int main(){

    DoublyLinkedList dll;

    dll.insertAtEnd(1);
    dll.insertAtEnd(5);
    dll.insertAtEnd(4);
    dll.insertAtEnd(2);
    dll.insertAtEnd(6);
    dll.insertAtEnd(3);

    dll.display();

    vector<int> ans = distanceBetweenCriticalPoints(dll.head,dll.tail);
    cout<<"Min Distance: "<<ans[0]<<" and "<<"Max Distance: "<<ans[1]<<endl;
    
    return 0;
}