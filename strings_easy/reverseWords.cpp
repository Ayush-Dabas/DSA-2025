#include <iostream>
#include <string>
using namespace std;

void reversWords(string s){
    int left = 0, right = s.length();
    string temp = "", ans = "";
    while(left <= right){
        if(s[left] != ' '){
            temp += s[left];
        }
        else if(s[left] == ' '){
            if(ans!="")
                ans = temp + ' ' + ans;
            else
                ans = temp;
            temp = "";
            
        }
        left++;
    }

    if(temp!=""){
        if(ans!=""){
            ans = temp + ' ' + ans;
        }
        else{
            ans = temp;
        }
    }

    for(int i=0 ; i<ans.length(); i++){
        cout << ans[i];
    }
}

int main(){
    string s = "this is an amazing program";
    reversWords(s);
    return 0;
}