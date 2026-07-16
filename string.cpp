#include<iostream>
#include<string>
using namespace std;

int main() {
    string a = "Vizag";
    string b;
    string c = "Programming";
    cout << "Using getline function." << endl;
    getline(cin, b);
    c[0] = 'C';
    
    int count = 0;
    for(char i : b){
        count += 1;
    }
    cout << "First letter: " << c[0] << endl;
    cout << "Last letter: " << c[c.length() - 1] << endl;
    cout << b << endl;
    cout << a << endl;
    cout << c << endl;
    cout << "Length of string: " << count << endl;
    return 0;
}