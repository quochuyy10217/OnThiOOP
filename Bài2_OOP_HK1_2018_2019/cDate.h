#include <iostream>
using namespace std;
#pragma once
class cDate
{
private:
    int Ngay;
    int Thang;
    int Nam;
public:
    cDate();
    ~cDate();
    cDate operator++();
    cDate operator++(int);
    friend ostream &operator<<(ostream &out, cDate Temp);
    friend istream &operator>>(istream &in, cDate &Temp);
};

cDate::cDate()
{
}

cDate::~cDate()
{
}

ostream &operator<<(ostream &out, cDate Temp)
{
    out<<"Ngay "<<Temp.Ngay<< " Thang "<<Temp.Thang<<" Nam "<<Temp.Nam<<endl;
    return out;
}

istream &operator>>(istream &in, cDate &Temp)
{
    in>>Temp.Ngay;
    in>>Temp.Thang;
    in>>Temp.Nam;
    return in;
}

cDate cDate::operator++()
{
    int NgayMax;
    if (this->Thang!=2)
    {
        ++this->Ngay;
        if (this->Thang==1||this->Thang==3||this->Thang==5||this->Thang==7||this->Thang==8||this->Thang==10||this->Thang==12) NgayMax=31;
        else NgayMax=30;
        if (this->Ngay>NgayMax)
        {
            this->Ngay=1;
            ++this->Thang;
            if (this->Thang>12)
            {
                this->Thang=1;
                ++this->Nam;
            } 
 
        }
    }
    else
    {
        bool isNamNhuan;
        if (this->Nam%400==0) isNamNhuan=true;
        else if (this->Nam%4==0 && this->Nam%100!=0) isNamNhuan=true;
        else isNamNhuan=false;
        if (isNamNhuan==true) NgayMax=29;
        else NgayMax=28;
        ++this->Ngay;
        if (this->Ngay>NgayMax)
        {
            this->Ngay=1;
            ++this->Thang;
        }
    }
    return *this;
}

cDate cDate::operator++(int)
{
    int NgayMax;
    if (this->Thang!=2)
    {
        this->Ngay++;
        if (this->Thang==1||this->Thang==3||this->Thang==5||this->Thang==7||this->Thang==8||this->Thang==10||this->Thang==12) NgayMax=31;
        else NgayMax=30;
        if (this->Ngay>NgayMax)
        {
            this->Ngay=1;
            this->Thang++;
            if (this->Thang>12)
            {
                this->Thang=1;
                this->Nam++;
            } 
 
        }
    }
    else
    {
        bool isNamNhuan;
        if (this->Nam%400==0) isNamNhuan=true;
        else if (this->Nam%4==0 && this->Nam%100!=0) isNamNhuan=true;
        else isNamNhuan=false;
        if (isNamNhuan==true) NgayMax=29;
        else NgayMax=28;
        this->Ngay++;
        if (this->Ngay>NgayMax)
        {
            this->Ngay=1;
            this->Thang++;
        }
    }
    return *this;
}
