#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    friend void print_point(Point point);
    // hàm bạn ko thành viên
    // nên không có kế thừa được
    // có thể hàm bạn bên trong class hoặc bên ngoài class. 
    // gọi bất cứ đâu trong chương trình.
    // nạp chồng toán tử.

    //  Ưu điểm: co thể truy cập vào các biến private, protected trong class mà không cần thông phuong thứ get, set.
    // cải thiện tính bảo mật của mã. giúp cho các thành viên private và protected trong bị truy cập trái phép.
    // tăng hiệu chương trình, truy cập vào priv và pro
    friend Point operator+(Point p1, Point p2){ //  nap chong toan tu. 
        Point p3;
        p3.x = p1.x + p2.y;
        p3.y = p1.y + p2.y;

        return p3;
    }
};

void print_point(Point point)
{
    cout << point.x << "  " << point.y << endl;
    
}

int main()
{
    print_point(Point(1,2));

    Point p1(3,4);
    Point p2(6,9);

    Point p3 = p1 + p2;

    print_point(p3);

}