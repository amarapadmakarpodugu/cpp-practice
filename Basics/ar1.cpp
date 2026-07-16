#include<iostream>
using namespace std;

int main() {
    cout << "Enter number of elements of the array: " << endl;
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cout << "Enter " << i+1 << " element of array: " << endl;
        cin >> a[i];
    }

    int sum = 0;
    for(int x : a){
        sum += x;
    }
    cout << "Average is: " << (sum/n) << endl;
    return 0;
}