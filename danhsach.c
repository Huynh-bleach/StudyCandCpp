#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50
struct sach
{
    int ma;
    char ten[30];
    char nxb[30];
    char tacgia[30];
    /* data */
};

void input(struct sach snv[], int in){
    char ctam[10];
    for(int i = 0; i < in; i++){
        printf("Nhap vao ma sach thu %d:", i+1);
        gets(ctam);
        snv[i].ma = atoi(ctam);
        printf("Nhap vao ten:");
        gets(snv[i].ten);
        printf("Nhap vao nxb:");
        gets(snv[i].nxb);
        printf("Nhap tac gia:");
        gets(snv[i].tacgia);



    }
}

void output(struct sach snv[], int in){
    for(int i = 0; i < in; i++){
        printf("%5d|%s|%s|%s\n", snv[i].ma,snv[i].ten,snv[i].nxb,snv[i].tacgia);
    }
}

int main(){
    struct sach snv[MAX];
    char ctam[10];
    int i,in,ma;

    printf("Nhap vao so sach:");
    gets(ctam);
    in = atoi(ctam);
    input(snv, in);
    output(snv, in);



    
}
