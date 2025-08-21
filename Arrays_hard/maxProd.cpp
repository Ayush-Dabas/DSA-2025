#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void maxProductSub(vector<int> arr){
    int prod1 = arr[0], prod2 = arr[0],result = arr[0];
    for(int i=1 ; i<arr.size() ; i++){
        int temp = max({arr[i], prod1*arr[i], prod2*arr[i]});
        prod2 = min({arr[i], prod1*arr[i], prod2*arr[i]});
        prod1 = temp;

        result = max(prod1, prod2);
    }

    cout << result;
}

int main(){
    vector<int> arr = {1,2,-3,0,-4,-5};
    maxProductSub(arr);
    return 0;
}