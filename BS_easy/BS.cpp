#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int lo = 0, hi = arr.size()-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            lo = mid + 1;
        }
        else{
            hi = mid -1;
        }

    }
    return -1;
}

int main(){
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    cout << binarySearch(arr, 12);
    return 0;
}