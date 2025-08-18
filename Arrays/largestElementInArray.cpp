#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int recursion(vector<int> arr, int n){
    if (n==1){
        return arr[n];
    }
    return max(arr[n],recursion(arr, n-1));
}

int main(){
    vector<int> arr = {1,5,2,6,6,754,8,3,754};

    cout << recursion(arr, arr.size());
    return 0;
}