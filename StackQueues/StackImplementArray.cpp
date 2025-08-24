#include <iostream>
#include <vector>
using namespace std;

// stack
class Stack{
    int size;
    int *arr;
    int top;
    public:
        Stack(){
            top = -1;
            size = 1000;
            arr = new int[size];
        }
        void push(int x){
            top+=1;
            arr[top] = x;
        }
        int pop(){
            int temp = arr[top];
            top--;
            return temp;
        }
        int Top(){
            return arr[top];
        }
        int Size(){
            return top+1;
        }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "\n size of stack is " << st.Size();
    cout << "\n top element of stack is "<<st.Top();
    cout << "\n "<<st.pop();
    cout << "\n size of stack is " << st.Size();
    cout << "\n top element of stack is "<<st.Top();
    cout << "\n"<< st.pop() ;
    cout << "\n size of stack is " << st.Size();
    cout << "\n top element of stack is "<<st.Top();
    return 0;
}