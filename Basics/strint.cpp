#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s = "Hello123@AI";
    int a = 0;
    int n = 0;
    int sc = 0;

    for(char x : s){
        if(isalpha(x)){
            a += 1;
        }else if(isdigit(x)){
            n += 1;
        }
        else{
            sc += 1;
        }
    }
    cout << "Number of alphabets: " << a << endl;
    cout << "Number of digits: " << n << endl;
    cout << "Number of special characters: " << sc << endl;

    return 0;
}