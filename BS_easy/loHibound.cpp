#include <iostream>
#include <vector>
using namespace std;

int lowBound(vector<int> arr, int key){
    int lo = 0, hi = arr.size() - 1;
    int ans;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] >= key){
            ans = mid;
            hi = mid -1;
        }
        else{
            lo = mid + 1;

        }
    }
    return ans;
}

int highBound(vector<int> arr, int key){
        int lo = 0, hi = arr.size() - 1;
    int ans;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] > key){
            ans = mid;
            hi = mid -1;
        }
        else{
            lo = mid + 1;

        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,3,3,4,5,6,7,8,9,10,11};
    cout << lowBound(arr, 3);
    cout << highBound(arr, 3);
    return 0;
}