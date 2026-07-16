#include<iostream>
using namespace std;

bool isprime(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (n%i == 0) {
            count += 1;
        }
    }
    if (count == 2){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    
    if(isprime(n) == 1){
        cout << "It is a prime number." << endl;
    }
    else {
        cout << "It is not a prime number." << endl;
    }
    return 0;
}