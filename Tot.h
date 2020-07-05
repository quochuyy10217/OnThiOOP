#include <iostream>
using namespace std;
#include "QuanCo.h"
#pragma once
class Tot:public QuanCo
{
public:
    Tot();
    Tot(int a, int b, int c);
    ~Tot();
    void CachDi();
};

Tot::Tot()
{
}

Tot::Tot(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Tot::~Tot()
{
}

void Tot::CachDi()
{
    cout<<"Tot: Di moi o mot nuoc. Neu tot chua qua song, no chi co the di thang, khi qua song roi no co the di ngang hay di thang 1 o moi nuoc..."<<endl;
}
