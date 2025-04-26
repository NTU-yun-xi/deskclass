//#include<iostream>
//#include"class_desk.h"
//using namespace std;
//
//int main() {
//	double a, b, h;
//	cin >> a >> b >> h;
//	PolygonDesk desk1(a, b, h);
//	cout<<desk1.getShapeName()<<endl;
//	cout<<"Area：" << desk1.getPolygonArea() << endl;
//	cout<<"长：" << desk1.getPolygonSide1() << endl;
//	cout<<"宽：" << desk1.getPolygonSide2() << endl;
//	cout<<"高：" << desk1.getHeight() << endl;
//	double c;
//	cin >> a >> b >> c >> h;
//	PolygonDesk desk3(a, b, h);
//	cout<<desk3.getShapeName()<<endl;
//	cout<<"Area：" << desk3.getPolygonArea() << endl;
//	cout<<"边1：" << desk3.getPolygonSide1() << endl;
//	cout<<"边2：" << desk3.getPolygonSide2() << endl;
//	cout<<"边3：" << desk3.getPolygonSide3() << endl;
//	cout<<"高：" << desk3.getHeight() << endl;
//	double r;
//	cin>> r >> h;
//	CircleDesk desk2(r,h);
//	cout<<desk2.getShapeName()<<endl;
//	cout<<"Area：" << desk2.getCircleArea() << endl;
//	cout<<"半径：" << desk2.getCircleRadius() << endl;
//	cout<<"高：" << desk2.getHeight() << endl;
//	return 0;
//}
#include <iostream>
using namespace std;
#include "class_desk.h"

int main() {
    double a, b, h;
    cin >> a >> b >> h;
    RectangleDesk desk1(a, b, h);
    cout << desk1.getShapeName() << std::endl;
    cout << "Area: " << desk1.getArea() << std::endl;
    cout << "Length: " << desk1.getLength() << std::endl;
    cout << "Width: " << desk1.getWidth() << std::endl;
    cout << "Height: " << desk1.getHeight() << std::endl;

    double c, d;
    cin >> a >> b >> c >> d;
    TriangleDesk desk2(a, b, c, d);
    cout << desk2.getShapeName() << std::endl;
    cout << "Area: " << desk2.getArea() << std::endl;
    cout << "Side A: " << desk2.getSideA() << std::endl;
    cout << "Side B: " << desk2.getSideB() << std::endl;
    cout << "Side C: " << desk2.getSideC() << std::endl;
    cout << "Height: " << desk2.getHeight() << std::endl;

    double r;
    cin >> r >> h;
    CircleDesk desk3(r, h);
    cout << desk3.getShapeName() << std::endl;
    cout << "Area: " << desk3.getArea() << std::endl;
    cout << "Radius: " << desk3.getRadius() << std::endl;
    cout << "Height: " << desk3.getHeight() << std::endl;

    return 0;
}