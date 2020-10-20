#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include <iostream>
#include "Shape.h"

using namespace std;

//constructor
Shape::Shape(string shapeName) : name{shapeName} {
	cout << "In Shape typical-use constructor" << endl;
}

//deconstructor
Shape::~Shape() {}

double Shape::getArea(){
	cout << "Shape has no specified area" << endl;
	return 0;
}

void Shape::print(){
	cout << "In the Shape class's print statement" << endl;
	cout << "name = " << this->name << endl;
}

/*virtual void print(){

}

virtual void print() = 0{
	
}*/

#endif
