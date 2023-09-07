#include <iostream>

using namespace std;
// class giong nhu ban thiet ke
// object laf doi tuong

class Person
{
    // tu khoa public la cong khai
    //  truy cap cong khai ben trong va ben ngoai class.
    // thuoc tinh vaf phuong thuc cos theer truy caapj
public:
    // thuoc tinh
    string name;
    int age;
    string address;
    // method
    // phuong thuc cua lop
    // lập trình hướng đối tượng là tạo ra bộ mã nguồn dễ dàng sử dụng và bảo trì.
    

    // Constructoe - ham khoi tao vaf phai  nam o pham vi public.
    Person(){// chay ddau tieen khi dduoc khai bao.

    }

    Person(string _name,int _age, string _address){ // khoiw tao co tham so truyen vao
      name =_name;
      age = _age;
      address = _address;

    }



    void work()
    {
        cout << name << " is working....." << " " << sdt << endl;
    }
private:

       string sdt = "0345943150";
// rieng tu   
// các thuộc tính và phương thức được khai báo ở phần private thì chỉ được sử bên trong class.
// bên ngoài sử dụng không được.





};

int main()
{

    Person person1;

    person1.name = "Huynh";
    person1.age = 21;
    person1.address = "Ho Chi Minh";

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    person1.work();
}