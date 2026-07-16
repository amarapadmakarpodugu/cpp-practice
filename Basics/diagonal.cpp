#include<iostream>
using namespace std;

int main() {
    int a[3][3];
    cout << "Enter the elements of array: " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Diagonal elements are: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                sum += a[i][j];
                cout << a[i][j] << ",";
            }
        }
    }
    cout << endl;
    cout << "Sum of diagonal elements is: " << sum << endl;
    return 0;
}