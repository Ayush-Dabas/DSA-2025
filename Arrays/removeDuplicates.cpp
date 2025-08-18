#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int i=0;
    for(int j=1 ; j<arr.size() ; j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> arr = {1,1,1,3,4,5,5,6,7,7,7,7,7,8,9};
    int k = removeDuplicates(arr);
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}