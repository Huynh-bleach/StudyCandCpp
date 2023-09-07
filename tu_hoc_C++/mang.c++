#include <iostream>
//#include <stdio.h>
/*
int main()
{
    // <kieu du lieu> <ten_mang>[so luong phan tu];
    int n;

    int soluong;

    std::cin >> n;

    int numbers[n];
    soluong = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < soluong; i++)
    {
        std::cout << "vui long nhap vao so number thu " << i + 1 << " ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < soluong; i++)
    {
        std::cout << "number thu " << i + 1 << " la " << numbers[i] << std::endl;
    }

    printf("%d", numbers);
}
*/
/*
int main(){
    int n = 6;
    //khai bao mang
    int arr[n] = {1,2,3,4,5,6};
    //vi tri can xoa trong mang
    int index = 2;
    //hien thi mang ban dau
    printf("MANG BAN DAU\n");
    for(int i = 0; i < n ; i++){
        printf("%d \t",arr[i]);
    }
    
    // Dich chuyen mang ve ben trai tu vi tri xoa
    for(int i = index; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    //sau khi xoa giam so luong phan tu mang
    n--;
    
    //hien thi mang sau khi xoa tai vi tri index = 3
    printf("\nMANG SAU KHI XOA TAI ARR[%d]\n", index);
    for(int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }

}
*/

int main(){
    int n = 10;
    int mang[n] = {2, 4, 6, 7,8, 9, 1, 5, 0, 10};

    int location;
    int valiable;

    std::cout << "Nhap vao vi tri ban muon them phan tu vao: ";
    std::cin >> location;

    std::cout << "Gia tri ban muon them vao la: ";
    std::cin >>valiable;
    
    std::cout << "Mang goc: ";
    for(int i = 0; i < n ; i++)
    {
        std::cout << mang[i] << " ";

    }

    for(int i = n; i > location ; i--){
          mang[i] = mang[i - 1];
         
    }

    mang[location] = valiable;

    

    std::cout << "\n mang hien tai: ";
    n++;
    for(int i = 0; i < n ; i++)
    {
        std::cout << mang[i] << " ";

    }


}
