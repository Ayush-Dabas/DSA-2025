#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i=0 ; i < n ; i++){
        int j = i;
        while( j>0 && arr[j - 1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    } 
}

int main(){
    int arr[10] = {9,5,4,4,1,3,6,7,8,1};
    insertionSort(arr,10);
    for(int i=0 ; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}