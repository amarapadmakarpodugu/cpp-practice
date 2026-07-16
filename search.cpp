#include<iostream>
using namespace std;

int main() {
    int ar[5] = {5,4,3,2,1};

    int n;
    cout << "Enter element to search: " << endl;
    cin >> n;

    bool isfound = false;
    for(int i = 0; i < 5 ; i++){
        if(ar[i] == n){
            isfound = true;
            break;
        }
    }
    if(isfound){
        cout << "Element found!" << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }
    return 0;
}