#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "programming";
    int f[256] = {0};
    string ans = " ";
    for(char x : s){
        if(f[x] == 0){
            ans += x;
            f[x] = 1;
        }
    }
    cout << ans << endl;
    return 0;
}