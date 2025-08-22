#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int timesRotated(vector<int> arr){
    int lo = 0, hi = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        if (arr[lo] <= arr[hi]){
            if(arr[lo] < ans){
                ans = arr[lo];
                index = lo;
            }
            break;
        }

        if(arr[lo] <= arr[mid]){
            if (arr[lo] < ans) {
                index = lo;
                ans = arr[lo];
            }
            lo = mid + 1;
        }

        else{
            if(arr[mid] < ans){
                index = mid;
                ans = arr[mid];
            }
            hi = mid - 1;

        }
    }
    return index;
}

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3}; 
    int ans = timesRotated(arr); 
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}