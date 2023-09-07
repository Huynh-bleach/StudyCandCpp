#include <iostream>

int main(){
    int n;

    try_again:
    std::cout << "Vui Long Nhap N vao: ";
    std::cin >> n;

    if(n <= 0 || n%2 == 0){
        goto try_again;
        // goto là nhảy tơi đoạn chỉ định.

    }

    std::cout << "Gia tri cua n la: " << n;



}