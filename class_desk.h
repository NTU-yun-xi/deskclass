
#include <string>
#include <cmath>

class Shape {
public:
    virtual ~Shape() = default; 
    virtual double getArea() const = 0; 
    virtual string getShapeName() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius_(radius) {}
    double getArea() const override {
        return 3.14159 * radius_ * radius_;
    }
    string getShapeName() const override {
        return "Circle";
    }
    double getRadius() const { return radius_; }

private:
    double radius_;
};

class Polygon : public Shape {
public:
    virtual ~Polygon() = default;
};

class Rectangle : public Polygon {
public:
    Rectangle(double length, double width) : length_(length), width_(width) {}
    double getArea() const override {
        return length_ * width_;
    }
    string getShapeName() const override {
        return "Rectangle";
    }
    double getLength() const { return length_; }
    double getWidth() const { return width_; }

private:
    double length_;
    double width_;
};

class Triangle : public Polygon {
public:
    Triangle(double a, double b, double c) : a_(a), b_(b), c_(c) {}
    double getArea() const override {
        double s = (a_ + b_ + c_) / 2;
        return sqrt(s * (s - a_) * (s - b_) * (s - c_));
    }
    string getShapeName() const override {
        return "Triangle";
    }
    double getSideA() const { return a_; }
    double getSideB() const { return b_; }
    double getSideC() const { return c_; }

private:
    double a_, b_, c_;
};


class Desk {
public:
    Desk(double height) : height_(height) {}
    virtual ~Desk() = default;
    double getHeight() const { return height_; }

private:
    double height_;
};

class RectangleDesk : public Desk, public Rectangle {
public:
    RectangleDesk(double length, double width, double height)
        : Desk(height), Rectangle(length, width) {}
    string getShapeName() const override {
        return "RectangleDesk";
    }
};

class CircleDesk : public Desk, public Circle {
public:
    CircleDesk(double radius, double height)
        : Desk(height), Circle(radius) {}
    string getShapeName() const override {
        return "CircleDesk";
    }
};

class TriangleDesk : public Desk, public Triangle {
public:
    TriangleDesk(double a, double b, double c, double height)
        : Desk(height), Triangle(a, b, c) {}
    string getShapeName() const override {
        return "TriangleDesk";
    }
};