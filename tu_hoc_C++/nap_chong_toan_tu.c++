#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;
// nap chon toan tu
// ghi đề lại logic mà toán tử đã định nghĩa sẵn trong C++
// định nghĩa các logic gic nhap .
    friend istream& operator>>(istream &is, Point &p){
         cout << " x = ";
         is >> p.x;
         cout << " y = ";
         is >> p.y;

         return is;

    }

    friend ostream& operator<<(ostream &os, Point p){
        os << p.x << " " << p.y << endl;
        return os;
    }

    friend Point operator+(Point p1, Point p2){
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;

    }
};
int main(){
    Point p1,p2;
// khong thể sử dụng toán tử nhập với Struct

    cin >> p1;

    cout << "x = " << p1.x << " ,y = " << p1.y << endl;

    cout << p1;


    cin >> p2;
    cout << p2;

    Point p3 = p1 + p2;
    cout << " p1 + p1 = " << p3;





}