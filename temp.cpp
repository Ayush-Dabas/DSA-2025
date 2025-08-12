#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int a[], int n){
    for(int i=0 ; i<n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int a[], int n){
    for(int i=0 ; i<n-1 ;i++){
        for(int j=i+1; j<n ; j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}

int main(){
    int a[5] = {5,3,2,4,1};
    bubbleSort(a,5);
    printArray(a,5);
    return 0;
}