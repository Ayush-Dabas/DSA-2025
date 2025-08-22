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

bool searchInLL(Node* head, int val){
    if(!head){
        return false;
    }

    while(head){
        if(head->data == val){
            return true;
        }
        head = head->next;
    }
    return false;
}

int main(){
    Node* ll = new Node(10);
    ll->next = new Node(20);
    ll->next->next = new Node(30);
    ll->next->next->next = new Node(40);
    cout << searchInLL(ll, 30) << endl;
    return 0;
}