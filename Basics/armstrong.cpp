#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter number: " << endl;
    cin >> n;

    cout << "Checking for armstrong number..." << endl;
    int o = n;

    int count = 0;
    if (n == 0){
        count = 1;
    }
    else{
        while (n>0) {
            count += 1;
            n = n/10;
        }
    }
    n = o;
    int sum = 0;
    while (n != 0){
        int d = n%10;
        int p = round(pow(d,count));
        sum += p;
        n = n/10;
    }

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;
    cout << "Original = " << o << endl;
    
    if(sum == o){
        cout << "The given number is an armstrong number." << endl;
    }else {
        cout << "Not an armstrong number." << endl;
    }
    return 0;
}