#include <iostream>
#include <vector>

using namespace std;
/*
// lop ban - Friend class
class B; // khai bao lơp B.

class A{
    private:
    int x = 4;

    friend B; // khai bao lop B laf banj cua lop a
    // để lớp b có thể truy cập vào thành viên private của lớp A.

};

class B
{
    public:
    void print_x(A a){
        cout << a.x;
    }
};

int main(){

    B b;
    b.print_x(A());

}
*/
/*
int main()
{
    vector<int> number;

    number.push_back(1);
    number.push_back(2); // them phan tu vao cuoi mang.
    number.push_back(3);

    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i] << "  ";
    }

    cout << endl;

    number.erase(number.begin() + 1);

    // erase laf xóa phần tử. truyên vào địa chỉ.
    // number.begin() là trả về địa chỉ phần tử đầu tiên.
    // cộng thêm 1 là địa chỉ phần tử thứ hai.

    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i] << "  ";
    }
}
*/
// úng dụng lớp bạn
class Bank;

class Account{
private:
string name;
int balance;
public:
  string get_name(){
    return this->name;
  }
  int get_balance(){
    return this->balance;
  }

  friend Bank;

};

class Bank{
private:
      vector<Account> account;

public:
   void add_account(string name, int balance){
    Account new_account;
    new_account.name = name;
    new_account.balance = balance;

    this->account.push_back(new_account);

   }
   void get_account(string name){
    int index = -1;
    for(int i = 0;this->account.size(); i++){
        if(!name.compare(this->account[i].name)){
             index = i;
             break;
        }
    }

    if(index != -1){
        cout << "Name: " << this->account[index].name <<",   balance: " << this->account[index].balance << endl;  
    }

    else{
        cout << " not compare!" << endl;
    }
   }

};


int main(){
    Bank bank;

    bank.add_account("Huynh" , 9000);
    bank.add_account("Manh" , 10000);
    bank.add_account("Vo" , 11000);
    bank.add_account("Nghi" , 12000);

    bank.get_account("Huynh");

}