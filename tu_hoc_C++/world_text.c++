#include  <iostream>
#include <fstream>

using namespace std;

//read/write file

/*

int main(){
   fstream fs;

   fs.open("text.txt");
   // fs.open("E:\\....\\...\\...txt");

   if(fs.is_open()){
    cout << " Mo file thanh cong";
   }
   else{
    cout << "That bai!";
   }

 //  fs << "hello world";// ghi file(viet file) in noi dung vao file;
// in ra file. 
   string str;

   // cin đọc dữ liệu từ bàn phím
   // fs >> đọc dữ liệu từ file txt.


   getline(fs,str); // doc file, lay du lieu tu file text roi gan cho bien str;

   fs << "Vo Manh Huynh" <<endl;

fs.close(); // dong file lai



cout << str;
}
*/

/*
struct  Person
{
    string name;
    int age;

    Person(){

    }

    Person(string _name, int _age){
        name = _name;
        age = _age;


    }
};

int main(){
    Person *person = new Person[2];

 //   person[0] = Person("Huynh",21);
 //   person[1] = Person("Nghi",10);


    fstream fs;
    fs.open("text.txt");

  //  for(int i = 0;i < 2; i++){
    //    fs << person[i].name << endl; // ghi du lieu vao file;
      //  fs << person[i].age  << endl;
        //fs << endl;
  //  }

  for(int i = 0; i < 2; i++){
    getline(fs, person[i].name);// doc du lieu tu file.
    fs >> person[i].age;
    fs.ignore();
  }

  for(int i = 0;i < 2; i++){
       cout << person[i].name << endl; 
      cout << person[i].age  << endl;
     cout << endl;
    }

    fs.close();
    }

    */

   // ------------------- cac che do lam viec voi file

int main(){
    fstream fs;

    fs.open("text.txt", ios::in);

    fs.close();


}