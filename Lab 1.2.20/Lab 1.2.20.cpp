#include <iostream>
#include <string>
#include <cmath>

class Point2D {
private:
	double x;
	double y;
public:
	Point2D(double x, double y);
	double distanceTo(Point2D that);
	double getX() { return x; };
	double getY() { return y; };
};

class Line2D {
private:
	double slope;
	double y_intercept;
	Point2D pA;
	Point2D pB;

public:
	Line2D(double slope, double y_intercept) : slope(slope), y_intercept(y_intercept), pA(0, 0), pB(0, 0) {}
	Line2D(Point2D pointA, Point2D pointB);
	std::string toString();

};



Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

Line2D::Line2D(Point2D pA, Point2D pB) : pA(pA), pB(pB)
{

	if (pA.getX() == pB.getX()) {
		slope = NAN;
		y_intercept = NAN;
	}
	else {

		slope = (pB.getY() - pA.getY()) / (pB.getX() - pA.getX());

		y_intercept = pA.getY() - slope * pA.getX();
	}
}

std::string Line2D::toString() {

	if (std::isnan(slope)) {
		return "x = " + std::to_string(pA.getX());
	}

	else if (y_intercept == 0) {
		return "y = " + std::to_string(slope) + "x";
	}

	else if (y_intercept > 0) {
		return "y = " + std::to_string(slope) + "x + " + std::to_string(y_intercept);
	}

	else {
		return "y = " + std::to_string(slope) + "x - " + std::to_string(std::abs(y_intercept));
	}
}

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

	Line2D line(p1, p2);

	std::cout << "\nThe distance is: " << p1.distanceTo(p2) << "\n";
	std::cout << "The line equation is: " << line.toString() << "\n";
}