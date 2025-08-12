#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int *arr, int n){
    for (int i = n-1; i>0 ; i--){
        for(int j = i-1 ; j>=0 ; j--){
            if(arr[j] > arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main(){
    int arr[10] = {9,5,4,4,1,3,6,7,8,1};
    bubbleSort(arr,10);
    for(int i=0 ; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}