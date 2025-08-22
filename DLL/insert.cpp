#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val, Node* nextP, Node* prevP){
            data = val;
            next = nextP;
            prev = prevP;
        }

        Node(int val){
            data = val;
            next = nullptr;
            prev = nullptr;
        }
};

Node* convert2DArrayToLL(vector<int> arr){
    if(arr.size() == 0){
        return NULL;
    }

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void printDLL(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertAtTail(Node* head, int val){
    if(!head){
        return new Node(val);
    }
    Node* last = new Node(val);
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }

    temp->next = last;
    last->prev = temp;

    return head;  

}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node* head = convert2DArrayToLL(arr);
    printDLL(head);
    head = insertAtTail(head, 10);
    printDLL(head);

    return 0;
}