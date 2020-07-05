#pragma once
class QuanCo
{
protected:
    int x;
    int y;
    int Mau;
public:
    QuanCo();
    ~QuanCo();
    virtual void CachDi()=0;
};

QuanCo::QuanCo()
{

}

QuanCo::~QuanCo()
{
}
