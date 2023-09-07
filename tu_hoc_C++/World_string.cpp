#include <iostream>
#include <string>

/*
int main(){
   std::string str = "hello";
   int thutu;

   std::cout << str;

   std::cout << "nhap vao so thu tu: ";// std::cout khi bấm dấu enter hoặc dấu cách là coi như đã kết thúc nhập..
   std::cin >> thutu;
   std::cout << "so thu tu vua nhap la: " << thutu <<std::endl;

   std::cin.ignore(); // ngan hanh dong enter anh huong toi getline.
  std::cout << "nhap vao chuoi : ";
   getline(std::cin, str);// dung de nhap chuoi tu ban phim.

   std::cout << "Cuoi vua duoc nhap vao la: "<< str << "    "<< str[8];


    return 0;
}
*/
/*
int main(){
    std::string mystring = "0123456";
    // mystring.substr(x,y);// Phương thức này trả về chuỗi con bắt đầu từ x và số lượng là y
    // neu khong truyen vao y thif se cat den cuoi
    std::string mystr = mystring.substr(2,3); // output: 234;

    std::cout << mystr << std::endl;

    // mystring.find(); // tìm phần có trong mang hay không
    std::cout << mystring.find(mystr); // output tra ve vi tri tim thay: 2

    // neeus khoong tim duoc thi tra ve 1 gia tri

    //mystring.erase(2,2); // xoa phan tu ra khoi chuoi
    // batws dau o vi tri 2 vaf xoa 2 phan tu

    std::cout << "\n" << mystring.erase(2,3);// output: 0156

    // mystring.replace(x,n,s); thay thế n phần tử tại vị trí x bằng chuoi s

    std::cout << "\n" << mystring.replace(2,2,"234");


    // mystring.compare(mystr) // so sanhs hai chuoi mystring vaf mystr
    // trả về 0 khi 2 chuỗi bằng nhau bằng 1 khi mýtring lớn hơn và bằng trừ 1 khi mystr lớn hơn

    std::cout <<"\n" << mystring.compare(mystr);
// so sanh tung ki tu dua vao bang ma ascii.

// mystring.insert(x,s); chèn s vào vị trí x
   std::cout << "\n" << mystring.insert(5, "56789");
   std::cout << "\n" << mystring.length() << "    "<< mystring.size(); // do dai chuoi

}

int tong(int a,int b){

    int c  = a + b;

    return c;

}
*/

// ---------------------- baif tap xoa khoan trang o dau vaf cuoi.
/*
int main(){
    std::string mystring;

    getline(std::cin, mystring);

    while ((mystring[0] == ' ')){
        mystring.erase(0,1);

    }
    while (mystring[mystring.size() - 1] == ' ')
    {
        mystring.erase(mystring.size() - 1, 1);

    }

    std::cout << " ket qua: " << mystring;

}
*/
// xóa khoản trắng giữa các từ
/*
int main(){
    std::string chuoi;
    getline(std::cin , chuoi);

    for(int i = 0; i < chuoi.length(); i++){
        if(chuoi[i] == ' '){
            chuoi.erase(i, 1);
        }
    }

    std::cout << " ket qua: " << chuoi;

}
*/

// in hao chu cai dau
/*
int main(){
     std::string chuoi;
    getline(std::cin , chuoi);

    for(int i = 0; i < chuoi.length(); i++){

        chuoi[i] = tolower(chuoi[i]);


    }

    for(int i = 0; i < chuoi.length(); i++){
        if(i == 0){

            chuoi[i] = toupper(chuoi[i]);
        }

        if(chuoi[i] == ' ' && chuoi[i + 1]){
            chuoi[i + 1] = toupper(chuoi[i+1]);
        }
    }


    std::cout << " ket qua: " << chuoi;


}
*/

/*
Loại bỏ khoảng trắng đầu cuối.
Loại bỏ khoảng trắng thừa ở giữa các từ.
Viết hoa chữ cái đầu, các chữ còn lại viết thường.*/

int main()
{
    std::string myString;

    std::cout << " nhap vao chuoi: ";
    getline(std::cin, myString);

    while ((myString[0] == ' '))
    {
        myString.erase(0, 1);
    }
    while (myString[myString.size() - 1] == ' ')
    {
        myString.erase(myString.size() - 1, 1);
    }

    
    int i = 0;
    while (i < myString.length())
    {
        if (myString[i] == ' ' && myString[i + 1] == ' ')
        {
            myString.erase(i, 1);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < myString.length(); i++)
    {

        myString[i] = tolower(myString[i]);
    }

    for (int i = 0; i < myString.length(); i++)
    {
        if (i == 0)
        {

            myString[i] = toupper(myString[i]);
        }

        if (myString[i] == ' ' && myString[i + 1])
        {
            myString[i + 1] = toupper(myString[i + 1]);
        }
    }

    std::cout << " ket qua: " << myString;
}