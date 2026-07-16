#include<iostream>
using namespace std;

int main () {
    int x = 100;
    int *p = &x;
    cout << "The value is: " << x << endl;
    cout << "The address is: " << &x << endl;
    cout << "The pointer is: " << p << endl;
    cout << "Value using pointer: " << *p << endl;
    return 0;
}