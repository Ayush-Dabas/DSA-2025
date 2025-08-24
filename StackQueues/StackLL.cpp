#include <iostream>
using namespace std;

class stackNode{
public:
    int data;
    stackNode* next;
    stackNode(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
    stackNode* head;
public:
    Stack(){
        head = NULL;
    }

    bool isEmpty(){
        if(!head){
            return true;
        }
        return false;
    }
    void stackPush(int x){
        stackNode* element = new stackNode(x);
        element->next = head;
        head = element;
    }
    int stackPop(){
        if(isEmpty()){
            return -1;
        }
        stackNode* temp = head;
        head = head->next;
        delete temp;
    }

    int peek(){
        if(!isEmpty()){
            return head->data;
        }
        return -1;
    }
};

int main(){
    Stack st;
    st.stackPush(1);
    st.stackPush(2);
    st.stackPush(3);
    cout << st.peek() << endl;
    st.stackPop();
    cout << st.peek();
    return 0;
}