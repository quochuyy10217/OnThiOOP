#include "QuanCo.h"
#include <iostream>
using namespace std;
#pragma once
class Si:public QuanCo
{
public:
    Si();
    Si(int a, int b, int c);
    ~Si();
    void CachDi();
};

Si::Si()
{
}

Si::Si(int a, int b, int c)
{
    this->x=a;
    this->y=b;
    this->Mau=c;
}

Si::~Si()
{
}

void Si::CachDi()
{
    cout<<"Si: Di xeo 1 o moi nuoc, luon phai o trong cung nhu tuong..."<<endl;
}
