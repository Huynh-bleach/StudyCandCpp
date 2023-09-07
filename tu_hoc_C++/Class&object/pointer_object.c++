#include <iostream>

using namespace std;
/*
// --Con tro voi Object
class Cat
{
private:
    string name;
    int age;

public:
    Cat()
    {
    }
/*   Cat(string _name, int _age) // contructor thuong le
    {
        name = _name;
        age = _age;
    }

   // neu khai bao dangj con tro hoac  binh thuong.
   Cat(string name, int age){
      this->name = name;
      this->age = age;
   }



      string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }
};

int main(){
  //  Cat *cat = new Cat("Den",1);
  Cat* cat  = new Cat("NHo",3);

  cout << "Name: "<< cat->get_name() <<endl;
  cout << "Age: "<< cat->get_age();



}
*/

///-------------------------- Kees thua
/*
class Animal
{
public:
   float weight;
   void run(){
    cout << "Animal is running..." <<endl;
   }
};

class Cat : public Animal
{
    public:
    string name;
    void eat(){
        cout<< "Cat is eating ...";
    }

    float get_chieucao(){
        return weight;
    }
};

int main(){
    Cat lu;
    lu.weight = 29;

    cout << "chieu cao " << lu.get_chieucao();

    lu.run();
    lu.eat();
}
*/

///------------------------thuộc tính truy cập và kiểu kế thừa.
/*

class Animal
{
public:
   float weight;
   void run(){
    cout << "Animal is running..." <<endl;
   }

protected:
   string chan = "dong vat 4 chan";
};

class Pet{
    public:
    string name;

};

class Cat : public Animal, public Pet
{
    public:

    void eat(){
        cout<< "Cat is eating ...";
    }

    float get_chieucao(){
        return weight;
    }

    string get_chan(){
        return chan;
    }
};



int main(){
    Cat cat;

    cout << cat.get_chan() << "kh";





}

// public: truy caap been trong va ben ngoai class ddc, kế thừa đc
// protected: được truy cap bên trong class, bên ngaoif không được, được phép kế thùa

// private : được truy cap bên trong class, bên ngaoif không được, không cho kế thừa.

*/

//-------------- Tinhs dda hanh(nap chong, ghi de)

/* - tinhs da hinh co 3 cach.
Nap chong
 - Nap chong ham
  - Nap chong toan tu

-Ghi de
-Phuong thuc ao*/
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b) // nap chong ham.
    {
        return a + b;
    }
};

class Point
{
public:
    int x;
    int y;
    Point()
    {
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    friend Point operator+(Point p1, Point p2)
    { // nap chong toan tu
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;
    }
};

class Animal
{
public:
    void move()
    {
        cout << "\n Anime is eating...." << endl;
    }
};

class Dog : public Animal
{
public:
    void move()
    { // ghi de phuong thuc.
        cout << "Dog mov" << endl;
    }
     // muon goi ham move cua class Animal;
    void parent_move(){
        Animal::move();
    }


};

int main()
{
    Calculator cal;
    int a = 1, b = 3;
    float c = 1.4, d = 1.5;

    cout << "a + b = " << cal.add(a, b) << endl;
    cout << "c + d = " << cal.add(c, d);

    Point p1(1, 2), p2(3, 4);

    Point p3 = p1 + p2;

    cout << "\n"
         << "p3 = " << p3.x << " , " << p3.y << endl;

    Dog cho;

    cho.move();
    cho.parent_move();
}