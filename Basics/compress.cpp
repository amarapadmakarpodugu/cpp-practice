#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "aaabbccd";
    string ans = " ";
    int count = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            count += 1;
        }else{
            ans += (s[i] + to_string(count));
            count = 1;
        }
    }
    cout << "Compressed string is: " << ans << endl;
    return 0;
}