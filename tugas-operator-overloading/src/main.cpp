#include <iostream>
#include <cmath>
#include "include/PersegiPanjang.hpp"

using namespace std;

void start() {
    cout << "press enter to start";
    cin.ignore();
    system("cls||clear");
}

int main()
{
    system("cls||clear");
    float panjang, lebar, MidX, MidY;

    cout << "mulailah memasukkan data !!!" << endl;
    cout << "data persegi panjang 1" << endl;
    cout << "Panjang Persegi Panjang 1 : ";cin>>panjang;
    cout << "Lebar Persegi Panjang  1  : ";cin>>lebar;
    cout << "Titik tengah X    : ";cin>>MidX;
    cout << "Titik tengah Y    : ";cin>>MidY;
    PersegiPanjang pp1(panjang, lebar, MidX, MidY);

    system("cls||clear");

    cout << "data persegi panjang 2" << endl;
    cout << "Panjang Persegi Panjang 2 : ";cin>>panjang;
    cout << "Lebar Persegi Panjang  2  : ";cin>>lebar;
    cout << "Titik tengah X : ";cin>>MidX;
    cout << "Titik tengah Y : ";cin>>MidY;
    PersegiPanjang pp2(panjang, lebar, MidX, MidY);

    start();

    PersegiPanjang pp3; //inisiasi variabel untuk persegi panjang baru//
    cout << "besaran awal persegi panjang 1 adalah sebagai berikut : " << endl;
    pp1.prints();
    cout << "besaran awal persegi panjang 2 adalah sebagai berikut : " << endl;
    pp2.prints();

    //penggunaan operator+
    pp3 = pp1 + pp2;
    if(pp1==pp2) {

        cout << "Hasil penjumlahan dari persegi panjang 1 & 2 adalah sebagai berikut : " << endl;
        pp3.prints();

    }

    start();

    cout << "besaran awal persegi panjang 1 adalah sebagai berikut : " << endl;
    pp1.prints();
    cout << "besaran awal persegi panjang 2 adalah sebagai berikut : " << endl;
    pp2.prints();

    //penggunaan operator-
    pp3 = pp1 - pp2;
    if(pp1==pp2) {

        cout << "hasil pengurangan dari persegi panjang 1 dan 2 adalah sebagai berikut : " << endl;
        pp3.prints();

    }

    start();
    
    //penggunaan operator++
    cout << "besaran persegi panjang 1 : " << endl;
    pp1.prints();
    ++pp1;
    cout << "besaran persegi panjang 1 setelah dilakukan operator++ : " << endl;
    pp1.prints();
    --pp1;

    start();

    //penggunaan operator--
    cout << "besaran persegi panjang 2 : " << endl;
    pp2.prints();
    --pp2;
    cout << "besaran persegi panjang 2 setelah dilakukan operator++ : " << endl;
    pp2.prints();
    ++pp2;

    start();

    //penggunaan operator[]
    cout << "perbandingan properti xmin dari kedua persegi panjang dengan operator[]" << endl;
    cout << "xmin dari persegi panjang 1 : " << pp1[1] << endl;
    cout << "xmin dari persegi panjang 2 : " << pp2[1] << endl;

    if(pp1[1]>pp2[1]) {
        cout << "xmin persegi panjang 1 lebih dari xmin persegi panjang 2" << endl;

    } else if(pp1[1]<pp2[2]) {
        cout << "xmin persegi panjang 2 lebih dari xmin persegi panjang 1" << endl;

    } else {
        cout << "xmin persegi panjang 1 dan 2 sama besar" << endl;

    }

    start();

    cout << "besaran awal Persegi Panjang 1 : " << endl;
    pp1.prints();
    cout << "besaran awal Persegi Panjang 2 : " << endl;
    pp2.prints();

    //penggunaan operator==
    if(pp1==pp2) {cout << "kedua persegi panjang saling beririsan" << endl;}
    else {cout << "kedua persegi panjang tak saling beririsan" << endl;}

    start();

    cout << "program telah selesai silakan tekan enter";
    cin.ignore();
    system("cls||clear");

    return 0;

}