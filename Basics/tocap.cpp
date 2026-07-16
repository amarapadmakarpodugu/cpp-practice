#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s = "computer";
    for(char &c : s){
        c = toupper(c);
    }
    cout << s << endl;
    return 0;
}