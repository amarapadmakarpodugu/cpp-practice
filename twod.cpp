#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter number of rows: " << endl;
    cin >> a;
    cout << "Enter number of columns: " << endl;
    cin >> b;
    int ar[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "Enter element of array: " << endl;
            
            cin >> ar[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}