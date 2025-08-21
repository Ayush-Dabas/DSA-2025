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

bool linearSearch(vector<int> arr, int key){
    for(int i=0 ; i<arr.size(); i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,123};
    cout << linearSearch(arr, 123);

    return 0;
}