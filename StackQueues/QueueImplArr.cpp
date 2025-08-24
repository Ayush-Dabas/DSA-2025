#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int start, end, currentSize, maxSize;
    public:
        Queue(){
            arr = new int[100];
            start = -1;
            end = -1;
            currentSize = 0;
        }
        Queue(int maxSize){
            (*this).maxSize = maxSize;
            arr = new int[maxSize];
            start = -1;
            end = -1;
            currentSize = 0;
        }
        void push(int newElement){
            if(currentSize == maxSize){
                cout << "Queue is full\n";
                exit(1);
            }
            if(end == -1){
                start = 0;
                end = 0;
            }
            else{
                end = (end + 1)%maxSize;
            }
            arr[end] = newElement;
            cout << "The element is pushed: " << newElement << " at " << end << endl;
            currentSize++;
        }
        int pop(){
            if(start == -1){
                cout << "Queue is empty\n";
                return -1;
            }
            int popped = arr[start];
            if (currentSize == 1){
                start = -1;
                end = -1;
            }
            else{
                start = (start + 1)%maxSize;
            }
            currentSize--;
            return popped;
        }
        int top(){
            if(start == -1){
                cout << "Queue is empty\n";
                return -1;
            }
            return arr[start];  
        }
        int size(){
            return currentSize;
        }
};

int main(){
    Queue qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    cout << qs.top();
    cout << qs.size();
    cout << qs.pop();
    return 0;
}