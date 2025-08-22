#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data_1, Node* next_1){
            data = data_1;
            next = next_1;
        }

        Node(int data_1){
            data = data_1;
            next = NULL;
        }
};

int main(){
    vector<int> arr = {1,2,3,4};
    Node* list = new Node(arr[0]);
    return 0;
}