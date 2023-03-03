#include <iostream>
#include "try2.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    cout << "strat create my point: " << endl;
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    Point M;
    M.setPoint(a, b);
    M.printPoint();

    return 0;
}