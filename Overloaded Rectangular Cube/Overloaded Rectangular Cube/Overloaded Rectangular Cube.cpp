
#include <iostream>

class RectangularCube
{
private:
	double length;
	double width;
	double height;

public:
	// Implementation
	RectangularCube() : length(1), width(1), height(1) {} // Constructor with all fields set to 1

	RectangularCube(double l, double w, double h)
	{ // Customizable constructor
		length = l;
		width = w;
		height = h;
	}
	// Setters and Getters for length, width, and height
	double getLength() const { return length; }

	void setLength(double l) { length = l; }

	double getWidth() const { return width; }

	void setWidth(double w) { width = w; }

	double getHeight() const { return height; } // Inline function implementation

	void setHeight(double h) { height = h; }

	double getVolume() const
	{
		return (length * width * height);
	}

	double getSurfaceArea() const // Return the result of the surface area
	{
		return (2 * (length * width)) + (2 * (length * height)) + (2 * (width * height));
	}
};
std::ostream& operator<<(std::ostream& co, const RectangularCube& rc)
{
	co << "L= " << rc.getLength() << std::endl;
	co << "W= " << rc.getWidth() << std::endl;
	co << "H= " << rc.getHeight() << std::endl;
	co << "V= " << rc.getVolume() << std::endl;
	co << "A= " << rc.getSurfaceArea() << std::endl;
	return co;
}
  bool operator<(const RectangularCube& rc,  RectangularCube& rc2)
{
	  if (rc.getVolume() < rc2.getVolume()) return  true;
}

int main()
{

	RectangularCube rc(2.4, 5.5, 6.6);
	RectangularCube rc2(2.4, 7.8, 8.8);
	
	//Overloaded output opertator to print out length, height, width, volume, and surface area
	std::cout << rc << std::endl;

	//Checks if volume of firts parameter is less than the second parameter volume, returns true or false. 
	std::cout << (rc.getVolume() < rc2.getVolume())<<std::endl;
	return 0;
}
