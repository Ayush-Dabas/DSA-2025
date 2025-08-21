#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findUnion(vector<int> a, vector<int> b){
    set<int> s;
    vector<int> unionArray;
    for(int i=0 ; i<a.size(); i++){
        s.insert(a[i]);
    }
    for(int i=0 ; i<b.size(); i++){
        s.insert(b[i]);
    }
    for(auto & it: s){
        unionArray.push_back(it);
    }
    printArray(unionArray);

}

int main(){
    vector <int> a = {1,2,3,4,5,6,7,8,9,10};
    vector <int> b = {2,4,6,8,10,12,14,16};
    findUnion(a,b);

    return 0;
}