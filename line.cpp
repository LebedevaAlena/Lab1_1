#include "line.h"
#include <iostream>
using namespace std;
line::line()
{
    //ctor
}

line::~line()
{
    //dtor
}

line::line(double k1, double k2, double c1, double c2)
: k1(k1), k2(k2), c1(c1), c2(c2)
{

}

void line::setValue(double k1, double k2, double c1, double c2)
{
this->c1 = c1;
this->c2 = c2;
this->k1 = k1;
this->k2 = k2;
}

bool line::perpend()
{
    y1 = k1 * x + c1;
    y2 = k2 * x + c2;
     if(k1 * k2 == -1)
         cout << "perpend" << endl;
        else cout << " ne perpend" << endl;

}

void printValue(line &lin)
{
    cout << "k1=" << lin.k1 << '\t' << "k2=" << lin.k2 << endl;
    lin.perpend();
}
