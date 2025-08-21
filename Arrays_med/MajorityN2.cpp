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

int majorityElement(vector<int> arr){
    int count = 0;
    int element;

    for(int i=0 ; i<arr.size(); i++){
        if(count == 0){
            count = 1;
            element = arr[i];
        }
        if(element == arr[i]){
            count += 1;
        }
        else{
            count -= 1;
        }
    }
    int count2 = 0;
    for(int i=0 ; i<arr.size(); i++){
        if (arr[i] == element){
            count2++;
        }
    }

    if(count2 > (arr.size()/2))
        return element;

    return -1;
}

int main(){
    vector<int> arr = {2,2,3,3,1,1,1,2,2,2,2};
    cout<< majorityElement(arr);
    return 0;
}