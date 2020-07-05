#include "QuanCo.h"
#include "Vua.h"
#include "Tuong.h"
#include "Si.h"
#include "Phao.h"
#include "Xe.h"
#include "Tot.h"
#include "Ma.h"
#include <iostream>
using namespace std;
class BanCo
{
private:
    QuanCo *ds[32];
public:
    BanCo();
    ~BanCo();
    void CachDiChuyen1QuanCo();
};
//Tao ban co voi 0 = mau trang, 1 = mau den
BanCo::BanCo()
{   //Co trang
    this->ds[0]=new Xe(1,1,0);
    this->ds[1]=new Ma(1,2,0);
    this->ds[2]=new Tuong(1,3,0);
    this->ds[3]=new Si(1,4,0);
    this->ds[4]=new Vua(1,5,0);
    this->ds[5]=new Si(1,6,0);
    this->ds[6]=new Tuong(1,7,0);
    this->ds[7]=new Ma(1,8,0);
    this->ds[8]=new Xe(1,9,0);
    this->ds[9]=new Phao(3,2,0);
    this->ds[10]=new Phao(3,8,0);
    this->ds[11]=new Tot(4,1,0);
    this->ds[12]=new Tot(4,3,0);
    this->ds[13]=new Tot(4,5,0);
    this->ds[14]=new Tot(4,7,0);
    this->ds[15]=new Tot(4,9,0);
    //Co den
    this->ds[16]=new Xe(10,1,1);
    this->ds[17]=new Ma(10,2,1);
    this->ds[18]=new Tuong(10,3,1);
    this->ds[19]=new Si(10,4,1);
    this->ds[20]=new Vua(10,5,1);
    this->ds[21]=new Si(10,6,1);
    this->ds[22]=new Tuong(10,7,1);
    this->ds[23]=new Ma(10,8,1);
    this->ds[24]=new Xe(10,9,1);
    this->ds[25]=new Phao(8,2,1);
    this->ds[26]=new Phao(8,8,1);
    this->ds[27]=new Tot(7,1,1);
    this->ds[28]=new Tot(7,3,1);
    this->ds[29]=new Tot(7,5,1);
    this->ds[30]=new Tot(7,7,1);
    this->ds[31]=new Tot(7,9,1);
}

BanCo::~BanCo()
{
}

void BanCo::CachDiChuyen1QuanCo()
{
    int x;
    QuanCo* Opt;
    cout<<"Chon quan co: "<<endl;
    cout<<"1.Tuong (Vua)"<<endl;
    cout<<"2.Si"<<endl;
    cout<<"3.Tuong"<<endl;
    cout<<"4.Ma"<<endl;
    cout<<"5.Xe"<<endl;
    cout<<"6.Phao"<<endl;
    cout<<"7.Tot"<<endl;
    cout<<"Lua chon cua ban la: ";
    cin>>x;
    switch (x)
    {
    case 1:
        {
            Opt = new Vua;
            break;
        }
    case 2:
        {
            Opt = new Si;
            break;
        }
    case 3:
        {
            Opt = new Tuong;

            break;
        }
    case 4:
        {
            Opt = new Ma;
            break;
        }
    case 5:
        {
            Opt = new Xe;
            break;
        }
    case 6:
        {
            Opt = new Phao;
            break;
        }
    case 7:
        {
            Opt = new Tot;
            break;
        }
    default:
        break;
    }
    Opt->CachDi();
}
