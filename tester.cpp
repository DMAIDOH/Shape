#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
using namespace std;

int main() {

	Shape* anyShape = new Shape("aShape");
	// &anyShape = new Shape("aShape");
	
	//--------------------------------------------------------------------
	
	// test Shape: getArea, print
	
	cout << endl;
	cout << "------" << endl;
	cout << "Shape:" << endl;
	cout << "------" << endl;

	// test Shape getArea()
	cout << "Shape area: " << anyShape->getArea() << " [0]" << endl;
	cout << endl;

	// test Shape print()
	cout << "Print Shape: " << endl;
	anyShape->print(); 
	cout << "[name = aShape]" << endl;

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

	Rectangle* aRectangle = new Rectangle("aRectangle", 2.0, 3.0);
	cout << endl;
	
	// test getArea
	cout << "Rectangle area: " << aRectangle->getArea() << " [6]" <<  endl;
	cout << endl;

        // test print()
        cout << "Print Rectangle: " << endl;
        aRectangle->print();
	cout << "[name = aRectangle]" << endl;
	cout << "[Width: 2]" << endl;
	cout << "[Height: 3]" << endl;	
	cout << endl;

	//--------------------------------------------------------------------
	
	return 0;
}
