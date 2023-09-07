#include <iostream>

/*
int main()
{
    int h = 3;
    int cot = 3;

    int array[h][cot] = {
        {1,3,4},
        {4,6,8}
    };

    std::cout << array[2][0];



    return 0;
}
*/
int main()
{
    int hang;
    int cot;

    std::cout << "Nhap vao so hang ban muon tao: ";
    std::cin >> hang;

    std::cout << "Nhap vao so cot ma ban muon tao: ";
    std::cin >> cot;

    int array[hang][cot];

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            std::cout << "phan tu o hang " << i + 1 << " cot " << j + 1 << " la: ";
            std::cin >> array[i][j];
        }
    }

    std::cout << "Mang 2 chieu vua moi duoc tao  " << std::endl;

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << " Tong cac phan tu trong mang hai chieu la: ";
    int Tong = 0;

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            Tong += array[i][j];
        }
    }
    std::cout << Tong;

    std::cout << "\nPhan tu lon nhat trong mang 2 chieu nay la: ";

    int max = 0;

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            max = (max > array[i][j]) ? max : array[i][j];
        }
    }
    std::cout << max;

    int TongBien = 0;
    std::cout << "\nTong cac phan tu bien trong mang hai chieu la: ";

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            TongBien += (i == 0 || i == hang - 1)? array[i][j] : (j == 0 || j == cot - 1) ? array[i][j] : 0;
        }
    }

    std::cout << "ket qua: "<<TongBien;
}
