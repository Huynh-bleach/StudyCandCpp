#include <iostream>

using namespace std;

void truyenvariable(int* &val);

int main(){
    int *a;
    *a = 9;
    truyenvariable(a);
    cout << a;
}

void truyenvariable(int* &val){
    cout << val << endl;
    *val = 90;
}