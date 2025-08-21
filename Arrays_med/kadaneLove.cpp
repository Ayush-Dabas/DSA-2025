#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int kadane(vector<int> arr){
    int maximum_sum = INT_MIN, sum = 0;
    for(int i=0 ; i<arr.size(); i++){
        sum = sum + arr[i];
        maximum_sum = max(maximum_sum, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maximum_sum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << kadane(arr);
    return 0;
}