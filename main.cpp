#include <iostream>
#include "punto.h"

int main()
{
    punto M(2,5);
    punto B(3,3);
    punto C(4,5);
    punto D(9,6);
    punto A = M;
    M.setX(4);
    cout << M.getX() << endl;
    cout << M.getY() << endl;
    A.setY(14);
    cout << A.getX() << endl;
    cout << A.getY() << endl;
    punto S[] = {};
    ArreglodePuntos P (S,5);
    cout << P.getSize() << endl;
    P.push_back(B);
    P.push_back(C);
    P.push_back(D);
    P.push_back(D);
    
    cout << P.getSize() << endl;
    P.remove(4);
    cout << P.getSize() << endl;
    P.clear();
    cout << P.getSize() << endl; 
    return 0;
}