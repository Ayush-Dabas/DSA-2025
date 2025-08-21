#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void leftShift(vector<int> &arr){
    int firstElement = arr[0];
    for(int i=0 ; i<arr.size()-1;i++){
        arr[i] = arr[i+1];
    }
    arr[arr.size()-1] = firstElement;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    leftShift(arr);
    printArray(arr);

    return 0;
}