#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val, Node* nextP){
            data = val;
            next = nextP;
        }

        Node(int val){
            data = val;
            next = nullptr;
        }
};

void printLL(Node* head){
    while(head){
        cout << head->data;
        head = head->next;
    }
}

void lenghtofLL(Node* head){
    int count = 0;
    if(head==NULL){
        cout << "0" ;
        return;
    }

    while(head){
        count++;
        head=head->next;
    }
    cout << count << endl;
}

int main(){
    Node* ll = new Node(10);
    ll->next = new Node(20);
    ll->next->next = new Node(30);
    ll->next->next->next = new Node(40);
    lenghtofLL(ll);
    return 0;
}