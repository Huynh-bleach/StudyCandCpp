#include <iostream>
#include <string>
#include <math.h>
/*
void inshow(std::string mysting)
{
    std::cout << " in ra thong bao ra man hinh" << mysting;
}

int Tong(int a, int b = 10)
{
    return a + b;
}

void kiem_tra_so_nguyen_to(int n){
    for(int i = 2;i <= sqrt(n); i++){
        if(n %i == 0){
            std::cout << n << " khong phai la so nguen to";
            return;

        }

            std::cout << n << " la so nguen to";
            return;

    }

}
*/
/*
float avg(int arr[], int n){
    int sum =0;
    for(int i =0 ; i < n; i++){
        sum += arr[i];
    }
    return (float)sum/n;
}

float avg2(int arr[][3], int n, int m){
    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            sum+= arr[i][j];
        }
    }
    return (float) sum/(m*n);
}



int main()
{
    /*
    kiem_tra_so_nguyen_to(9);
    inshow("hello world");
    std::cout << Tong(3, 7);
    std::cout << Tong(5);
    */
/*
int arr[10] = {1,2,3,4,5,6,7,8,9};

int numbers[2][3] = {
{1,2,3},
{4,5,6}
};

std::cout << avg(arr,9) << "\n";
std::cout <<avg2(numbers,2,3);
}
*/
/*
// tham chieu va tham tri
void input_integer(std::string label, int &x)
{
    std::cout << label;
    std::cin >> x;
}

void input_array(int number[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> number[i];
    }
}

int main()
{
    // int n = 5;
    // input_integer("nhap vao n: ", n);
    // std::cout << " gia trij vua nhap la:"<< n;
    int number[10];
    input_array(number, 4);
    std::cout << " gia tri sau khi nhap: ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << number[i]<< " ";
    }
}
// hệ thống sẽ cấp phát cho biến 1 ô nhớ. biến đấy sẽ tham chiếu đến ô nhớ đó.
//tham chieeu la chuyền vào địa chỉ của biến và có thể thay đổi giá trị biến đó trong hàm và bên ngoài cũng thya đổi theo
// khi truyền mảng vào hàm thì mặc định là truyền tham chiếu vào hàm nên bên ngoài cũng thay đổi theo;

*/

// khai bao ham nguyen mau

int sum(int a, int b);
void printshow(int value);
int main(){
    
    printshow(sum(20,8));
}
int sum(int a, int b){
    return a + b;
}
void printshow(int value){
    std::cout <<" ket qua nhan duoc la: "<< value;
}

