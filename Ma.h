#include <iostream>
using namespace std;
#include "QuanCo.h"
#pragma once
class Ma:public QuanCo
{
public:
    Ma();
    Ma(int a, int b, int c);
    ~Ma();
    void CachDi();
};

Ma::Ma()
{
}

Ma::Ma(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Ma::~Ma()
{
}

void Ma::CachDi()
{
    cout<<"Ma: Di ngang 2 o va doc 1 o (hoac nguoc lai) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang (doc) 2 thi ma khong di duoc duong do..."<<endl;
}