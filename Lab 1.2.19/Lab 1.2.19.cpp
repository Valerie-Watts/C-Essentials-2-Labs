#include <iostream>
#include <cmath>

class Point2D {
public:
	Point2D(double x, double y);
	double distanceTo(Point2D that);
private:
	double x;
	double y;
};

Point2D read()
{
	double x, y;

	std::cout << "Enter the x coordinate: \n";
	std::cin >> x;
	std::cout << "Enter the y coordinate: \n";
	std::cin >> y;

	Point2D coordinate(x, y);
	return coordinate;

}

Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point2D::distanceTo(Point2D that)
{
	double p1, p2;

	p1 = fabs(this->x - that.x);
	p2 = fabs(this->y - that.y);

	return sqrt((p1 * p1) + (p2 * p2));

}

void main()
{
	Point2D p1 = read();
	Point2D p2 = read();

	std::cout << "\nThe distance is: " << p1.distanceTo(p2) << "\n";
}