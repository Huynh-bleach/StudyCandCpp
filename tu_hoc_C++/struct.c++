#include <iostream>

using namespace std;
struct Date {
  int date;
  int month;
  int year;

  Date(){

  }
  Date(int _date, int _month,int _year){
    date = _date;
    month = _month;
    year = _year;
  }
};

struct Sinhvien
{
  // thuoc tinh(properties)
    string name;
    int age;
    Date dop;
    /* data */

    // phuong thuc(method)

    void run(){
      cout << "\nrunning" << name << "  "<< age;
    }

    // ham khoi tao (contructor)
    Sinhvien(){ // ham khỏi tạo luon chay đầu tiên khi được gọi.
     // nhận đối số vao f đc

    }

    Sinhvien(string _name, int _age, Date _dop){
      name = _name;
      age = _age;
      dop = _dop;
    }

    void Print(){
      cout << "Ten: "<< name <<", tuoi: "<< age << endl;
      cout << "Ngay sinh: "<< dop.date << "/" << dop.month << "/" << dop.year << endl; 
    }
};




int main(){
  //Sinhvien sinhvien_1;
  // Sinhvien sinhvien_1("manh",21); 
 // cout << "nhap vao ten sinh vien:";
  //getline(cin, sinhvien_1.name);
  //cout << "nhap vao tuoi sinh vien:";
 // cin >> sinhvien_1.age;

 // cout << " teen: " << sinhvien_1.name << "  , tuoi: " << sinhvien_1.age;
  //sinhvien_1.run();



  //----------
  //Sinhvien student("Huynh", 21, Date(16,11,2002));
  //cout << "ten: "<<student.name<< endl;
  //cout << "tuoi: "<<student.age<< endl;
  //cout << "Ngay sinh: " << student.dop.date <<"/"<<student.dop.month << "/" << student.dop.year ;

// mang voi struct 

  Sinhvien students[3] = {
    Sinhvien("Huynh", 21, Date(16,11,2002)),
    Sinhvien("Manh", 20, Date(15,10,2001)),
    Sinhvien("Vo", 19, Date(14,9,2000))

  };

  for(int i = 0; i < 3; i++){
    students[i].Print();
  }

}