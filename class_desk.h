#include<iostream>
#include<string>
using namespace std;
class Desk
{
public:
	double getDeskWidth() {
		return width;
	}
	double getDeskHeight() {
		return height;
	}
	double getDeskLength() {
		return length;
	}
	string getDeskShape() {
		return shape;
	}
	double getDeskArea() {
		return width * length;
	}
	Desk(double a, double b, double c, string d) {
		length = a;
		width = b;
		height = c;
		shape = d;
	}
private:
	double width;
	double height;
	double length;
	string shape;
};
