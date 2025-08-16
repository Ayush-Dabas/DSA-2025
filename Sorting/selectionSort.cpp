#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int *arr, int n){
    for (int i =0 ; i<n-1 ; i++){
        int min_i = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[min_i]){
                min_i = j;
            }
        }
        swap(arr[i],arr[min_i]);
    }
}

int main(){
    int arr[10] = {9,5,4,4,1,3,6,7,8,1};
    selectionSort(arr,10);
    for(int i=0 ; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}