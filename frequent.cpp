#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "programming";
    int a[256] = {0};
    
    for(char x : s){
        a[x]++;
    }
    int max = 0;
    char ans;
    
    for(char x : s){
        if(a[x] > max){
            max = a[x];
            ans = x;
        }
    }
    cout << "The most frequent character is: " << ans << endl;
    cout << "The highest frequency is: " << max << endl;
    return 0;     
}
