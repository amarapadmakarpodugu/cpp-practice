#include<iostream>
using namespace std;

int main() {
    cout << "Reverse right angled triangle" << endl;
    for(int i = 5; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << " " << endl;
    }
}