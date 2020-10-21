#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include <iostream>
#include "Rectangle.h"

using namespace std;

// typical-use constructor
Rectangle::Rectangle(string shapeName, double width, double height) : Shape(shapeName), widthValue{width}, heightValue{height} {
	cout << "In Rectangle typical-use constructor" << endl;
}

// destructor
Rectangle::~Rectangle() {}

// calculate the area of this Rectangle
double Rectangle::getArea() {
	return widthValue*heightValue;

// print out name, widthValue, and heightValue of this Rectangle
void Rectangle::print() {
	cout << "In Rectangle's print statement" << endl;
	cout << "Name: " << name << endl;
	cout << "Width: " << widthValue << endl;
	cout << "Height: " << heightValue << endl;
}

#endif
