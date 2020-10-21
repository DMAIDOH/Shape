#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <string>

class Circle : public Shape {
	private:
		double radiusValue;
		const long double pi = 3.141592653589793238L;
	public:
		Circle(std::string shapeName, double radius);
		~Circle();
		double getArea();
		void print();

};

#endif




















