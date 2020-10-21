#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <string>

using namespace std;

class Triangle : public Shape{
	private:
		double triBase, triHeight;

	public:
		Triangle(string name, double base, double height);
		~Triangle();
		double getArea();
		void print();
};
#endif
