#include<iostream>
#include"class_desk.h"
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	string d;
	cin >> d;
	Desk desk(a, b, c, d);
	cout << desk.getDeskArea() << endl;
	cout << desk.getDeskShape() << endl;
	cout << desk.getDeskLength() << endl;
	cout << desk.getDeskWidth() << endl;
	cout << desk.getDeskHeight() << endl;
	return 0;
}