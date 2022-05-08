#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__

#include<iostream>
#include<cmath>

class PersegiPanjang {
    private :
    float xmin, xmax, ymin, ymax;

    public :
    PersegiPanjang();
        PersegiPanjang(float MidX, float MidY, float Panjang, float lebar);
        bool operator== (PersegiPanjang const &) const;
        PersegiPanjang operator+ (PersegiPanjang const &);
        PersegiPanjang operator- (PersegiPanjang const &);
        void operator++();
        void operator--();
        void operator++(int);
        void operator--(int);
        float operator[](int i);
        void prints();


};
#endif