#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    Student(){

    }
    Student(string _name, int _age){
        name = _name;
        age = _age;
    }
};

int main(){
   // Student student("Huynh", 21);

// con tro quan li vung nho cuar studen.
  //  Student *student_ptr = &student;


     // truy cap den name
    // cout << (*student).name // cachs 2
  //  cout << student_ptr->name;

    // cap phat dong
    Student *student_ptr = new Student("Huynh",21); // vungf nhows tren Heap
    // sau khi su dung phai gia phong vung nhow
    // bangw delete student_ptr;

    cout <<(*student_ptr).name; // truy cap vao name




}