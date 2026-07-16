#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements of array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of array one by one: " << endl;

    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        a[i] = b;
    }

    int sum = 0;
    for (int x : a){
        sum += x;
    }

    cout << "Sum of elements: " << sum << endl;
    cout << "Average of the numbers: " << (sum/n) << endl;
    
    int max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    int min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << "Min of the elements: " << min << endl;
    cout << "Max of the elements: " << max << endl;
    
    return 0;
}
