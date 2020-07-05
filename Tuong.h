#include <iostream>
using namespace std;
#include "QuanCo.h"
#pragma once
class Tuong:public QuanCo
{
public:
    Tuong();
    Tuong(int a, int b, int c);
    ~Tuong();
    void CachDi();
};

Tuong::Tuong()
{
}

Tuong::Tuong(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Tuong::~Tuong()
{
}

void Tuong::CachDi()
{
    cout<<"Tuong: Di cheo 2 o (ke ca ngang va doc), cho moi nuoc di. Tuong chi duoc o 1 ben ban co, khong duoc di chuyen qua nua ban co cua doi phuong..."<<endl;
}
