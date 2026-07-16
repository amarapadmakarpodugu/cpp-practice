#include<iostream>
using namespace std;

void print (int n) {
    if(n == 6) {
        return;
    }
    cout << n << endl;
    print(n + 1);
}
int main () {
    cout << endl;
    print(1);
    return 0;
}