#include "try2.h"
using namespace std;


void Point::setPoint(int x, int y) { //ͨ������������� '::' ʵ��setPoint����
    xPos = x;
    yPos = y;
}

void Point::printPoint() { //ʵ��printPoint����
    cout << "x = " << xPos << endl;
    cout << "y = " << yPos << endl;
}

