#include<iostream>
using namespace std;

int main() {
    int b[5] = {5,4,2,3,6};

    int count = 0;
    for(int i : b){
        if(i%2 == 0){
            count += 1;
        }
    }
    cout << "The number of even numbers in the array are: " << count << endl;
    return 0;
}