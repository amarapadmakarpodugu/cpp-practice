#include<iostream>
using namespace std;

int main() {
    int a[3][3];
    cout << "Enter elements of matrix: " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    int sum = 0;
    cout << "Secondary diagonal elements: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i+j == 2){
                sum += a[i][j];
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Sum of secondary diagonal elements: " << sum << endl;
    return 0;
}