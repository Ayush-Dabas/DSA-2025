#include <iostream>
#include <vector>
using namespace std;

int findDup(vector<int> arr){
    if(arr.size() == 1){
        return arr[0];
    }
    if(arr[0] != arr[1]){
        return arr[0];
    }
    if(arr[arr.size() - 1] != arr[arr.size() - 2]){
        return arr[arr.size()-1];
    }


    int lo = 1, hi = arr.size() - 2;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]!= arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        if((mid%2 == 0 && arr[mid] == arr[mid-1]) ||(mid%2==0 && arr[mid] == arr[mid+1])){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,1,2,2,3,4,4,5,5};
    cout << findDup(arr);
    return 0;
}