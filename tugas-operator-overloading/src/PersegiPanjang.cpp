#include <iostream>
#include <cmath>
#include "persegipanjang.hpp"

using namespace std;

void PersegiPanjang::prints() {

    float panjang = this->xmax - this->xmin;
    float lebar = this->ymax - this->ymin;

    panjang= abs(panjang);
    lebar= abs(lebar);

    cout << "\nTitik tengah X : \n" << (this->xmax - this->xmin)/2 + this->xmin;
        cout << "\nTitik tengah Y : \n" << (this->ymax - this->ymin)/2 + this->ymin;
        cout << "\nPanjang untuk (X) : \n" << panjang;
        cout << "\nLebar untuk (Y) : \n" << lebar;
        cout << "\nNilai xmax : \n" << this->xmax;
        cout << "\nNilai xmin : \n" << this->xmin;
        cout << "\nNilai ymax : \n" << this->ymax;
        cout << "\nNilai ymin : \n" << this->ymin;
        cout << "\n\n";
}

PersegiPanjang::PersegiPanjang(){
    //
}

PersegiPanjang::PersegiPanjang (float MidX, float MidY, float Panjang, float lebar) {

    this->xmin = MidX - (Panjang / 2);
    this->xmax = this->xmin + Panjang;
    this->ymin = MidY - (lebar / 2);
    this->ymax = this->ymin + lebar;

}

bool PersegiPanjang::operator==(PersegiPanjang const &pp)const
{

    if (this->xmax == pp.xmin && this->xmin < pp.xmax && this->ymax > pp.ymin && this->ymin > pp.ymax)return true;
    else return false;

}

PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &pp)
{
    PersegiPanjang temp(0,0,0,0);
    
    if (*this == pp) {

        temp.xmax = max(this -> xmax, pp.xmax);
        temp.xmin = min(this -> xmin, pp.xmin);
        temp.ymax = max(this -> ymax, pp.ymax);
        temp.ymin = min(this -> ymin, pp.ymin);

    } else cout << "kedua persegi panjang tak beririsan operasi dibatalkan";

        return temp;
}

PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &pp)
{
    PersegiPanjang temp(0,0,0,0);

    if(*this == pp) {

        temp.xmax = max(this -> xmax, pp.xmax);
        temp.xmin = min(this -> xmin, pp.xmin);
        temp.ymax = max(this -> ymax, pp.ymax);
        temp.ymin = min(this -> ymin, pp.ymin);

    } else cout << "kedua persegi panjang tak beririsan operasi dibatalkan";

        return temp;
}

void PersegiPanjang::operator++() {

    float panjang = 0;
    float lebar = 0;
    float MidX = 0;
    float MidY = 0;

    panjang = (this -> xmax - this -> xmin);
    lebar + (this -> ymax - this -> ymin);
    panjang = abs(panjang);
    lebar = abs(lebar);

    MidX = panjang/2 + this -> xmin;
    MidY = lebar/2 + this -> ymin;

    panjang*=2;
    lebar*=2;

    this->xmax = MidX + panjang/2;
    this->xmin = MidX - panjang/2;
    this->ymax = MidY + lebar/2;
    this->ymin = MidY - lebar/2;
}

void PersegiPanjang::operator--() {

    float panjang = 0;
    float lebar = 0;
    float MidX = 0;
    float MidY = 0;

    panjang = (this -> xmax - this -> xmin);
    lebar + (this -> ymax - this -> ymin);
    panjang = abs(panjang);
    lebar = abs(lebar);

    MidX = panjang/2 + this -> xmin;
    MidY = lebar/2 + this -> ymin;

    panjang/=2;
    lebar/=2;

    this->xmax = MidX+ panjang/2;
    this->xmin = MidX - panjang/2;
    this->ymax = MidY + lebar/2;
    this->ymin = MidY - lebar/2;
}

void PersegiPanjang::operator ++ (int){}
void PersegiPanjang::operator -- (int){}

 float PersegiPanjang::operator[](int i) {

     switch(i) {

         case 1:
         return this -> xmin;
         break;

         case 2:
         return this -> xmax;
         break;

         case 3:
         return this -> ymin;
         break;

         case 4:
         return this -> ymax;
         break;
     }
 }
