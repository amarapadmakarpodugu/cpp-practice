#include<iostream>
using namespace std;

int main() {
    int a[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter " << i+1 << " element of array: " << endl;
        cin >> a[i];
    }

    int sum = 0;
    for(int x : a){
        sum += x;
    }
    cout << "Sum of all elements of array is: " << sum << endl;
    return 0;
}