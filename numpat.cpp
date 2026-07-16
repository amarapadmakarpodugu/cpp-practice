#include<iostream>
using namespace std;

int main() {
    cout << "Number triangle..." << endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << " " << endl;
    }
    return 0;
}