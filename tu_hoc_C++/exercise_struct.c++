/*
#include <iostream>

using namespace std;

//Viết chương trình nhập vào dữ liệu bán kính của 1 hình tròn. Tính và in ra màn hình chu vi và diện tích của hình tròn đó (sử dụng struct).


struct Circle{
    float r;

    friend istream& operator>>(istream &is, Circle &circle){
        cout << "nhap vao ban kinh: ";
         is >> circle.r;
        return is;
    }

    float chu_vi(){
        return r*2*3.14;
    }

    float dien_tich(){
        return r*r*3.14;
    }
};

int main(){
    Circle circle;
    cin >> circle;

    cout << "Chu vi hinh tron: " << circle.chu_vi()<<endl;
    cout << "Dine tich hinh tron: " << circle.dien_tich();
}
*/

#include <iostream>

using namespace std;

struct Product
{
    string name;
    int price;
    int quantity;

    friend istream &operator>>(istream &is, Product &product)
    {
        cout << "Nhap ten: ";
        is.ignore();
        getline(is, product.name);
        cout << "Nhap don gia: ";
        is >> product.price;
        cout << "Nhap so luong: ";
        is >> product.quantity;

        return is;
    }

    friend ostream &operator<<(ostream &os, Product product)
    {
        os << "Ten: " << product.name;
        os << " ,don gia: " << product.price;
        os << " ,so luong: " << product.quantity;
        return os;
    }
};
int show_menu();
void print_product(Product *product, int size);
void add_product(Product* &product, int &size);
void delete_product(Product* &product, int &size);
int main()
{

    int size = 0;
    Product *products = new Product[size];

    while (true)
    {
        int chose = show_menu();

        switch (chose)
        {
        case 1:
            /* code */
            print_product(products, size);
            break;
        case 2:
            /* code */
            add_product(products, size);
            break;
        case 3:
            /* code */
            delete_product(products,size);
            break;
        case 0:
            cout << "Bye bye!";
            return 0;

        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }

        cout << "Ban cos muon tiep tuc khoong?(1/0) ";

        bool is_continue;
        cin >> is_continue;
        if (!is_continue)
        {
            cout << "Bye bye!";
            break;
        }
    }
}

int show_menu()
{
    int chose;
    system("cls");
    cout << "==== Menu ====" << endl;
    cout << "1. Xem danh sach san pham" << endl;
    cout << "2. Them san pham moi  " << endl;
    cout << "3. Xoa san pham" << endl;
    cout << "0. Thoat chuong trinh" << endl;

    cout << "Lua chon cua ban la: ";

    cin >> chose;

    return chose;
}

void print_product(Product *product, int size)
{
    if (size == 0)
    {
        cout << "Chua co san pham nao" << endl;
    }
    else
    {
        cout << " Danh sach san pham " << endl;

        for (int i = 0; i < size; i++)
        {
            cout << product[i] << endl;
        }
    }
}


void add_product(Product* &product, int &size){
    Product new_product;
    cout << "Nhap thong tin san pham moi: " << endl;

    cin >> new_product;

    int new_size = size + 1;

    Product *tmp_product = new Product[new_size];


    for(int i =0; i < size; i++){
       tmp_product[i] = product[i];
    }
    tmp_product[new_size - 1] = new_product;

    delete[] product;
    product = tmp_product;
    size = new_size;

    cout << "Them san pham thanh cong!" << endl;


}


void delete_product(Product* &product, int &size){
    string delete_name;
    cout <<"Nhap ten san pham muon xoa: ";
    cin.ignore();
    getline(cin, delete_name);

    int delete_index = -1;

    for(int i =0; i< size; i++){
        if(!delete_name.compare(product[i].name)){
            delete_index = i;
            break;

        }


    }

    if(delete_index == -1){
        cout<<"Khong tim thay sa pham " << endl;
        return;
    }

    for(int i = delete_index;i<size - 1; i++){
        product[i] = product[i+1];
    }
    size--;

    Product *tmp_product = new Product[size];

    for(int i = 0; i<size; i++)
    {
        tmp_product[i] = product[i];
    }

    delete[] product;
    product = tmp_product;

    cout << "Xoa thanh cong1" << endl;


};




