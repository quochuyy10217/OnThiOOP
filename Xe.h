#include <iostream>
using namespace std;
#include "QuanCo.h"
#pragma once
class Xe:public QuanCo
{
public:
    Xe();
    Xe(int a, int b, int c);
    ~Xe();
    void CachDi();
};

Xe::Xe()
{
}

Xe::Xe(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Xe::~Xe()
{
}

void Xe::CachDi()
{
    cout<<"Xe:Di ngang hay doc tren ban co mien la khong bi quan khac can duong..."<<endl;
}