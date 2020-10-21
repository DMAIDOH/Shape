#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include <iostream>
#include "Shape.h"
#include "Circle.h"

using namespace std;

//typical-use constructor
Circle::Circle(string shapeName, double radius) : Shape(shapeName), radiusValue{radius}{
	cout << "In Circle typical-use constructor" << endl;
}

//destructor
Circle::~Circle(){}

//calculate the area of this Circle
double Circle::getArea(){
	return radiusValue*radiusValue*pi;
}

//print out name and radiusValue of this Circle
void Circle::print(){
	cout << "In Circle's print statement: " << endl;
	this->Shape::print();
	cout << "Radius: " <<  radiusValue << endl;
}

#endif





















