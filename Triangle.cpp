#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__

#include "Shape.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

//constructor
Triangle::Triangle(string name, double base, double height) : Shape{name}, triBase{base}, triHeight{height}{
		cout << "In Triangle typical-use constructor" << endl;
	}

	//deconstructor
	Triangle::~Triangle() {}
	
	//calculating area
	double Triangle::getArea(){
		return (0.5 * triBase * triHeight);
	}

	void Triangle::print(){
		cout << "In Triangle's print statement" << endl;
		this->Shape::print();
		cout << "Base: " << triBase << endl;
		cout << "Height: " << triHeight << endl;
	}


#endif


