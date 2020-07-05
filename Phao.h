#include <iostream>
using namespace std;
#include "QuanCo.h"
#pragma once
class Phao:public QuanCo
{
public:
    Phao();
    Phao(int a, int b, int c);
    ~Phao();
    void CachDi();
};

Phao::Phao()
{
}

Phao::Phao(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Phao::~Phao()
{
}

void Phao::CachDi()
{
    cout<<"Phao: Di ngang va doc giong nhu xe. Khi muon an 1 quan nao do thi phao phai nhay qua 1 quan co..."<<endl;
}
