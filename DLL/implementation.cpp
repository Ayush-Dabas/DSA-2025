#include <iostream>
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

int main(){

}