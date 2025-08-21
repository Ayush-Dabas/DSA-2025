#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findSeq(vector<int> arr){
    /*Bhaang bhosda method
    int n = arr.size();
    if(n==0){
        return;
    }
    int longest = 1;
    unordered_set<int> st;
    for(int i=0 ; i<n; i++){
        st.insert(arr[i]);
    }

    for(auto it: st){
        int cnt = 1;
        int x = it;
        while(st.find(x+1)!= st.end()){
            x += 1;
            cnt += 1;
        }
        longest = max(longest,cnt);
    }
    cout << longest;*/

    // True method
    int cnt = 0;
    int longest = 1;
    int lastSmaller = INT_MIN;
    sort(arr.begin(),arr.end());

    for(int i=0 ; i<arr.size(); i++){
        if(arr[i]-1 == lastSmaller){
            cnt += 1;
            lastSmaller = arr[i];
        }
        else{
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    cout << longest;
}

int main(){
    vector<int> arr = {100,200,1,2,3,4};
    findSeq(arr);
    return 0;
}