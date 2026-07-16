#include<iostream>
using namespace std;

int main() {
    int ar[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter element at " << (i) << "," << (j) << " index of the array: ";
            cin >> ar[i][j];
        }
    }

    int sum = 0;
    int max = ar[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum += ar[i][j];
            cout << ar[i][j] << " ";
            if(ar[i][j] > max){
                max = ar[i][j];
            }
        }
        cout << endl;
    }
    cout << "Max of elements is: " << max << endl;
    cout << "Sum of elements of array is: " << sum << endl;
    return 0;
}