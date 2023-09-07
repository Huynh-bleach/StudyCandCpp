#include <iostream>

struct Con_Nguoi{
    Con_Nguoi(int t, float cn, float cc){
        tuoi = t;
        can_nang = cn;
        chieu_cao = cc;
    }
    int tuoi;
    float can_nang;
    float chieu_cao;
};

int main(){
    Con_Nguoi huynh(21, 50, 1.68);
    Con_Nguoi nghi(10, 35, 1.2);

    Con_Nguoi *bon = &nghi;

    bon->tuoi = 16;
    bon->chieu_cao = 1.4;

    std::cout << nghi.chieu_cao << std::endl;


    return 0;
}