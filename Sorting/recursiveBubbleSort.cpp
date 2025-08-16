#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> a){
    for(int i=0 ; i<a.size(); i++){
        cout << a[i] << " ";
    }
}

void bubbleSort(vector<int> &arr, int n){
    if(n <= 1){
        return;
    }
    for (int j = 0 ; j<=n-2 ; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2,6,1};
    bubbleSort(arr,arr.size());
    print(arr);
    return 0;
}