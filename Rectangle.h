#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>

class Rectangle : public Shape {
	private:
	    double widthValue;
	    double heightValue;
	
	public:
	    Rectangle(std::string shapeName, double width, double height);
	    ~Rectangle();
	    double getArea();
	    void print();
}

#endif
