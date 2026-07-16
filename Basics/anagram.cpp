#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << endl;

    string s2;
    cout << "Enter string 2: ";
    cin >> s2;
    cout << endl;
    int f[256] = {0};

    int l1 = s1.length();
    int l2 = s2.length();

    
    if(l1 != l2){
        cout << "These are not anagrams." << endl;
        return 0;
    }
    for(char x : s1){
        f[x]++;
    }
    for(char x : s2){
        f[x]--;
    }
    for(int i = 0; i < 256; i++){
        if(f[i] != 0){
            cout << "They are not anagrams." << endl;
            return 0;
        }
    }
    cout << "They are anagrams." << endl;
    return 0;
    
}