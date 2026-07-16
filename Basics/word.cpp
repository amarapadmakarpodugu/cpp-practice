#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "I love programming";
    string ans = " ";
    string a[256];

    for(char x : s){
        if(x != " "){
            ans += x;            
        }
        else{
            ans = " ";
        }
    }
    return 0;
}