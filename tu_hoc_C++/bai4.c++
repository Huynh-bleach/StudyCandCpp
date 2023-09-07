#include <iostream>
#include <string.h>
#include <string>
/*// in du lieu
int main(){
    int i;
    float f;
    char c[20] = "hello world";
    int a,b;

    int d = 1;

    std::cout << c;

    // std::cin >> x; // nhap du lieu tu ban phim roi gan cho bien x


    return 0;
}
*/
// nhap du lieu
/*

int main(){
    int x; 
    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Value of x: " << x;
// std::endl dung de xuong dong
// \n cung dung de xuong dong

    std::cout << "Hello World" << std::endl;
    std::cout << "CPP" << std::endl << "Learning!" << std::endl;
    std::cout << "FUll\n Stack";


}
*/
// Các kiểu dữ liệu
// int
// float
// double - gioi hạn nhieu hơn float
// boolean: true / false
// char: kí tự : 'a', 'c',....
// ngoai ra con có các kiểu dữ liệu như: long, long long, unsigned l;ong, short,


/*
int main()
{
    std::cout << "Int: " << sizeof(int) << std::endl; // 4
    std::cout << "Float: " << sizeof(float) << std::endl; // 4
    std::cout << "Double: " << sizeof(double) << std::endl; // 8
    std::cout << "Bool: " << sizeof(bool) << std::endl; // 1
    std::cout << "Char: " << sizeof(char) << std::endl; // 1
    std::cout << "Long: " << sizeof(long) << std::endl; // 4
// kich thuoc du lieu
// ví dụ:

Kiểu int có thể lưu trữ 4 byte (-2,147,483,648 tới 2,147,483,647)
Kiểu short có thể lưu trữ 2 byte (-32,768 tới 32,767)

    return 0;
}
*/

// ép kiểu dữ liệu là chuyển từ kiểu dữ liệu này sang dư liệu khác
// có 2 loại ép kiểu: ngầm định và tường minh (lập trình viên tự động thực hiện )

int main(){
    int i = 1.4; // => i = 1

    int j = 'a'; // =>j = 97 (thể hiện giá trị thập phân(hệ 10) của giá trị a trong bảng mảng ascii)

    int a = 2;
    int b = 3;

    float c = (float) a/b;// ép kiểu tường minh- tự ép kiểu.


    std::cout << j; // ép kiểu ngầm định


}


