#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val, Node* pointTo){
        data = val;
        next = pointTo;
    }

    Node (int val){
        data = val;
        next = nullptr;
    }
};

void printLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head->next;
    }
}

Node* insertAtHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}


int main(){
    Node* LL = new Node(100);
    LL->next = new Node(200);
    LL->next->next = new Node(300);

    LL = insertAtHead(LL, 1);
    printLL(LL);
    return 0;
}