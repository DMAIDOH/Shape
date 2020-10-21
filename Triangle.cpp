#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__

#include "Shape.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

//constructor
Triangle::Triangle(string name, double base, double height):Shape(shapeName){
		cout << "In Triangle typical-use constructor" << endl;
		//triBase{base}; or this->triBase = base;
		//triHeight{height};or this->triHeight = height;
	}

	//deconstructor
	Triangle::~Triangle() {}

	double Triangle::getArea(){
		Shape::getArea();
		return (0.5 * triBase * triHeight);
	}

	void Triangle::print(){
		cout << "In Triangle's print statement" << endl;
		cout << "Name: " << name << endl;
		Shape::print();
		cout << "Base: " << triBase << endl;
		cout << "Height: " << triHeight << endl;
	}





