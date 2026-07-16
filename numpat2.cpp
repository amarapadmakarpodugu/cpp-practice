#include<iostream>
using namespace std;

int main(){

    cout << "Printing repeating number triangle..." << endl;

    for(int i = 0; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}