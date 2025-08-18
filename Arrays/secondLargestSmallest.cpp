#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int findSecondSmallest(vector<int> arr){
    if (arr.size()<2){
        return -1;
    }
    int Smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i=0 ; i<arr.size(); i++){
        if(arr[i] < Smallest){
            secondSmallest = Smallest;
            Smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != Smallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;

}

int findSecondLargest(vector<int> arr){
    if(arr.size() < 2){
        return -1;
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0 ; i<arr.size(); i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,3,54,12,-84};
    cout << findSecondSmallest(arr) << " " << findSecondLargest(arr);
    return 0;
}