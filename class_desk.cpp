
#include <iostream>
using namespace std;
#include "class_desk.h"

int main() {
    double a, b, h;
    cin >> a >> b >> h;
    RectangleDesk desk1(a, b, h);
    cout << desk1.getShapeName() << endl;
    cout << "Area: " << desk1.getArea() << endl;
    cout << "Length: " << desk1.getLength() << endl;
    cout << "Width: " << desk1.getWidth() << endl;
    cout << "Height: " << desk1.getHeight() << endl;

    double c, d;
    cin >> a >> b >> c >> d;
    TriangleDesk desk2(a, b, c, d);
    cout << desk2.getShapeName() << endl;
    cout << "Area: " << desk2.getArea() << endl;
    cout << "Side A: " << desk2.getSideA() << endl;
    cout << "Side B: " << desk2.getSideB() << endl;
    cout << "Side C: " << desk2.getSideC() << endl;
    cout << "Height: " << desk2.getHeight() << endl;

    double r;
    cin >> r >> h;
    CircleDesk desk3(r, h);
    cout << desk3.getShapeName() << endl;
    cout << "Area: " << desk3.getArea() << endl;
    cout << "Radius: " << desk3.getRadius() << endl;
    cout << "Height: " << desk3.getHeight() << endl;

    return 0;
}