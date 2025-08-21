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

void moveZeros(vector<int> &arr){
    int j = -1;
    for(int i=0 ; i<arr.size(); i++){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }

    if (j==-1){
        return;
    }

    for(int i=j+1 ; i<arr.size() ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    vector<int> arr = {1,0,2,3,9,0,0,0,3,4,5,0,5,8,0,76};
    moveZeros(arr);
    printArray(arr);
    return 0;
}