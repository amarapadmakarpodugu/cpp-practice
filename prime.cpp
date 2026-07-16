#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to be checked: " << endl;
    cin >> n;
    int count = 0;
    if(n<2){
        cout << "It is not a prime number." << endl;
    }
    for(int i = 1 ; i<=n ; i++){
        if (n%i == 0){
            count += 1;
        }
    }
    if(count == 2){
            cout << "It is a prime number." << endl;
        }else{
            cout << "It is not a prime number." << endl;
        }
    return 0;
}