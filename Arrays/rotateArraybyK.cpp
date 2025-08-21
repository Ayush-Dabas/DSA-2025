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

void rotateByK(vector<int> &arr, int k){
    if(arr.size() == 0){
        return;
    }
    k = k%arr.size();
    if (k>arr.size()){
        return;
    }

    int temp[k];
    for(int i=0 ; i<k; i++){
        temp[i] = arr[i];
    }
    for(int i=0 ; i<arr.size()-k ; i++){
        arr[i] = arr[i+k];
    }
    for(int i=arr.size()-k ; i<arr.size(); i++){
        arr[i] = temp[i+k-arr.size()];
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    rotateByK(arr,3);
    printArray(arr);
    return 0;
}