#include <iostream>

// Bài 1: Tạo mảng động có n phần tử nguyên (tối đa 10 phần tử). Nhập vào 1 số nguyên x và thêm x vào cuối mảng vừa tạo.

using namespace std;
void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int* &arr, int &size, int new_element);

void remove(int* &arr, int &size, int index);

void add(int* &arr, int &size, int index, int value);

void sapmang(int *arr, int size);

int main()
{
    int n,x,y;
    input_integer("n = ",n);
    int *numbers = new int[n];
    cout<< " nhap mang: ";
    input_array(numbers, n);
    input_integer("nhap vao vi tri phan tu muon them vao: ", x);
    input_integer("nhap vao gia tri phan tu muon them vao: ", y);

    //remove(numbers,n,x);
    add(numbers,n,x,y);
    cout<< " mang sau khi them vao: ";
    print_array(numbers,n);
    sapmang(numbers,n);
    cout << "\n mang sau khi sap xep lai: ";
    print_array(numbers,n);


}

void input_integer(string label, int &n){
    cout << label;
    cin >> n;
};

void input_array(int *arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
};

void print_array(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void push(int* &arr, int &size, int new_element){

    // tao mang moi
    // copy toa n bo phan tu củ sàn mới
    // them phan tu moi vao cuoi mang
    // gan mang moi sang con tro cũ và tăng size lên 1 đơn vị

    int *tam = new int[size + 1];

    for(int i = 0; i < size; i++){
        tam[i] = arr[i];
    }

    tam[size] = new_element;

    delete[] arr;

    arr = tam;
    size++;

}
void remove(int* &arr, int &size, int index){
    // xoa phan tu can xao trong mang cu
    for(int i = index; i< size - 1; i++){
        arr[i] = arr[i+1];
    }
    // tao mang moi
    int *tam = new int[size - 1];
    // copy cacs phan tu mang cu sang moi
    for(int i = 0; i < size -1; i++){
        tam[i] = arr[i];
    }
    // gans mang moi cho mang cu vaf giam size 1 donn vi
    delete[] arr;
    arr = tam;

    size--;

}

void add(int* &arr, int &size, int index, int value){
     // tao mang moi
    int *tam = new int[size + 1];
    // copy cacs phan tu mang cu sang moi
    for(int i = 0; i < size; i++){
        tam[i] = arr[i];
    }
     
    
    for(int i = size; i > index; i--){
        tam[i] = tam[i - 1];
    }

    tam[index] = value;

    delete[] arr;
    arr = tam;

    size++;

 };

void sapmang(int *tam, int size){
    

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size ; j++){
            if(tam[i] > tam[j]){
                int dan;
                dan = tam[j];
                tam[j] = tam[i];
                tam[i] = dan;
            }
        }
    }

   
};





