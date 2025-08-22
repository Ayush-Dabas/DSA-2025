#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val, Node* nextPointer){
            data = val;
            next = nextPointer;
        }

        Node(int val){
            data = val;
            next = nullptr;
        }
};   

void printLL(Node* head){
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
}

Node* deleteLastNode(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;

    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main(){
    Node* ll = new Node(10);
    ll->next = new Node(20);
    ll->next->next = new Node(30);
    ll->next->next->next = new Node(40);
    ll = deleteLastNode(ll);
    printLL(ll);
    return 0;
}