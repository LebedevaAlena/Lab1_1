#include <iostream>
#include "line.h"
using namespace std;

void Case(line *lin1, line *lin2)
{
    cout << " line 1: ";
    printValue(*lin1);
    cout << "line 2: ";
    printValue(*lin2);
}
int main()
{
    line *lin1 = new line(2, 8, 8, 3);
    line *lin2 = new line(2, -8, 8, -3);
    cout << "Case 1:" << endl;
    Case(lin1, lin2);
    cout << endl;

    delete lin1;
    delete lin2;

    lin1 = new line(1, -1, 2, 3);
    lin2 = new line(1, -5, -5, 5);
    cout << "Case 1:" << endl;
    Case(lin1, lin2);
    cout << endl;

    delete lin1;
    delete lin2;
    /*line a(2, 8, 8, 3);
    printValue(a);*/
    return 0;
}
