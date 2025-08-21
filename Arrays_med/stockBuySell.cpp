#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int profit(vector<int> arr){
    // Approach brute force:
    /* int maxProfit = INT_MIN;
    for(int i=0 ; i<arr.size()-1; i++){
        for(int j=i+1 ; j<arr.size(); j++){
            if(arr[j] > arr[i]){
                maxProfit = max(maxProfit, arr[j] - arr[i]);
            }
        }
    }
    return maxProfit; */

    // better one:
    int minElement = INT_MAX, maxProfit = INT_MIN;
    for(int i=0 ; i<arr.size(); i++){
        minElement = min(minElement, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minElement);
    }
    return maxProfit;

}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    cout << profit(arr);
    return 0;
}