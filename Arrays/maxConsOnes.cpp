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

int countMaximumOnes(vector<int> arr){
    int count = 0;
    int count_maximum = 0;
    for(int i=0 ; i<arr.size(); i++){
        if(arr[i] == 1){
            count += 1;
        }
        if(arr[i] == 0){
            count_maximum = max(count_maximum, count);
            count = 0;
        }
    }
    return count_maximum;
}

int main(){

    vector<int> arr = {1,1,1,0,1,0,1,1,1,1,1,1,1,0,0,0,1,1};
    cout << countMaximumOnes(arr);
    return 0;
}