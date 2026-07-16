#include<iostream>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    int max = a[0];
    int min = a[0];

    for(int x : a){
        sum += x;
        if(x > max){
            max = x;
        }
        if(x < min){
            min = x;
        }
    }

    cout << "Sum of numbers: " << sum << endl;
    cout << "Average: " << (sum/5) << endl;
    cout << "Max of numbers: " << max << endl;
    cout << "Min of numbers: " << min << endl;

    return 0;
}