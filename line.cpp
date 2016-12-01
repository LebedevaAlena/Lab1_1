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

line::line(double k, double c)
: k(k), c(c)
{

}

line::line(line &lin)
: k(lin.k), c(lin.c)
{

}

double line::Perpendicular(double k1, double c1, double k2, double c2)
{
    return k1 * k2;
}

bool line::perpend(line &lin)
{
    double P = Perpendicular(k, c, lin.k, lin.c);
     if( P == -1) return true;
        else return false;

}

void printValue(line &lin)
{
    cout << "k=" << lin.k << '\t' << "c=" << lin.c << endl;
    lin.perpend(lin);
}
