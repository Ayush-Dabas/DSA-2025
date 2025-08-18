#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr){
    if (arr.size()<2){
        return true;
    }
    for(int i=0 ; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {9,12,14,11,61,78};
    cout << isSorted(arr);
    return 0;
}