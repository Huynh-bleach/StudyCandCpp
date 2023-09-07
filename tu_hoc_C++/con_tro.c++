#include <iostream>

/*
// con tro la bien luu truu dia chi.

void input(int *n){
    std::cin >> *n;

}

int main(){
    /*
    int n = 4;

    int *contro = &n;

    *contro = 6;
     // thay ddooir gia tri cua dia tri cua nos.

    std::cout << contro << "\n";
    std::cout << n;



   int number[4] = {1,2,3,4};
   // dia chi cua mang cungx chinhs laf dia chi cur phan tu dau tien cuar mang.
   int *pointer;

   for(pointer = &number[0]; pointer < &number[0] + 4; pointer++){
    std::cout << *pointer << " ";
   }

   int n = 4;

   input(&n);

   std::cout << " gisa tri n: "<< n;



}
*/

// cấp phát động
// stack, heap là 2 vùng bộ nhớ.
// stack là lưu trữ biến cục bộ
// stack có tốc độ truy suất nhanh hơn heap
// stack có giới hạn lưu trữ nhơ hơn heap

// heap la fluuw trữ các biến toàn cục, các đối tượng của con trỏ khi được cấp phát đoọng.

///--- cú phát động cho con trỏ 1 vùng nhớ trong bộ nhớ heap.
/*
int main(){
    int *a = new int (5); // cu phap cap phat dong cho con tro.
    std::cout << *a;

    delete a; // giai phongs vung nho cua con tro a.
    // để không xảy rò rỉ bộ nhớ,
    // nếu không sử vùng nhớ này thì cần xóa
    // để sử dụng vùng nhớ khác.




    return 0;


}
*/

// -- cấp phát mảng động.

using namespace std;
int main()
{
    int a[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        b[i] = 1;
    }
    cout << " cacs phan tu truoc khi htem: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " ";
    }

    // chen them phan tu
    // tao mảng động mới có so lương phan tu la 4;
    int *arr = new int[4];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = b[i];
    }
    arr[3] = 2;

    // xoa vùng nhớ cũ.
    delete[] b;

    // gán vung nhớ mới cho con tro b;
    b = arr;
    cout << "\n cac phan tu sau khi them: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << b[i] << " ";
    }
}