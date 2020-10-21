#include <iostream>
#include "Shape.h"
using namespace std;

int main() {

	Shape s = Shape(string shape);
	
	//--------------------------------------------------------------------
	
	// test Shape: getArea, print
	
	cout << endl;
	cout << "------" << endl;
	cout << "Shape:" << endl;
	cout << "------" << endl;

	// test Shape getArea()
	cout << "Shape area: " << s.getArea() << endl;

	// test Shape print()
	cout << "Print shape: " << s.print() << endl;

	//--------------------------------------------------------------------
	
	// test Circle: getArea, print
	
	cout << endl;
        cout << "-------" << endl;
        cout << "Circle:" << endl;
        cout << "-------" << endl;
	
	Circle* aCircle = new Circle("aCircle", 2.0);
	
	//test getArea()
	cout << "Circle area: " << aCircle->getArea() << endl;
	cout << "Expected area: [12.566371]" << endl;

	//test print()
	cout << "Print Circle: " << endl;
	aCircle-> print();
	cout << "Expected name: [aCircle]" << endl;
	cout << "Expected radius: [2.0]" << endl; 

	
	//--------------------------------------------------------------------
	
	// test Triangle: getArea, print
	
	cout << endl;
	cout << "---------" << endl;
	cout << "Triangle:" << endl;
	cout << "---------" << endl;

	//--------------------------------------------------------------------
	
	// test Rectangle: getArea, print
	
	cout << endl;
	cout << "-------" << endl;
	cout << "Rectangle:" << endl;
	cout << "-------" << endl;

	//--------------------------------------------------------------------
	
	return 0;
}
