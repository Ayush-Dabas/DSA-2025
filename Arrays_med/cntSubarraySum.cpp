#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void FindSubarraySum(vector<int> arr, int sum){
    // unsolved..... ૮(˶ㅠ︿ㅠ)ა
}

int main(){
    vector<int> arr = {3,1,2,4};
    FindSubarraySum(arr, 6);
    return 0;
}