#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printLeader(vector<int> arr){
    vector<int> leaders;
    int maxTillNow = arr[arr.size()-1];
    leaders.push_back(maxTillNow);
    for(int i=arr.size()-2 ; i>=0 ; i--){
        if(maxTillNow < arr[i]){
            leaders.push_back(arr[i]);
            maxTillNow = arr[i];
        }
    }
    printArray(leaders);
}

int main(){
    vector<int> arr = {4,7,1,0};

    printLeader(arr);
    return 0;
}