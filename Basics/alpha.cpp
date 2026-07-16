#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    int v = 0;
    int co = 0;

    int l = s.length();
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            v += 1;
        }else{
            co += 1;
        }
    }
    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << co << endl;
    return 0;
}