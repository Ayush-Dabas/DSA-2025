#include <iostream>
#include <string>
using namespace std;

string removeParanthesis(string s){
    /*string result;
    int count = 0;
    for( char c: s){
        if(c == '(' && count++ > 0){
            result += c;
        }
        if (c==')' && count-- > 1){
            result += c;
        }
    }
    return result;*/
    int open_count = 0, close_count = 0;
    int start = 0;
    string result;

    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '('){
            open_count++;
        }
        else{
            close_count++;
        }

        if(open_count == close_count){
            result += s.substr(start + 1, i-start - 1);
            start = i+1;
        }
    }
    return result;
}

int main(){
    string s = "(()())(())()";
    cout << removeParanthesis(s);
    return 0;
}