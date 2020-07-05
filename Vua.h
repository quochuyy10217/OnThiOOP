#include "QuanCo.h"
#include <iostream>
using namespace std;
#pragma once
class Vua:public QuanCo
{
public:
    Vua();
    Vua(int a, int b, int c);
    ~Vua();
    void CachDi();
};

Vua::Vua()
{
}

Vua::Vua(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Vua::~Vua()
{
}

void Vua::CachDi()
{
    cout<<"Tuong (Vua): Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung, khong duoc ra ngoai..."<<endl;
}