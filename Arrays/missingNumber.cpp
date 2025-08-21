#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMissingNumber(vector<int> arr){
    /*
    use maths: sum of n = n(n+1)/2
    using loop : sum of array = x
    missing number = sum of n - x;
    */

    // using XOR
    int xor1 = 0, xor2 = 0;
    for(int i=0 ; i<arr.size()-1; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }

    xor1 = xor1 ^ arr.size();
    return xor1 ^ xor2;
}

int main(){
    vector<int> arr = {1,2,3,4,6,7,8};
    cout << findMissingNumber(arr);
    return 0;
}