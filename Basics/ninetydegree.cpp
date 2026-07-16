#include<iostream>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        int l = 0;
        int r = 2;
        while(l < r){
            swap(b[i][l],b[i][r]);
            l++;
            r--;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}