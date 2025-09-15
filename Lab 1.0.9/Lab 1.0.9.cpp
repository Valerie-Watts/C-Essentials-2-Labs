#include <iostream>
class AdHocSquare
{
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();


private:
	double    side;

};

AdHocSquare::AdHocSquare(double side) { this->side = side; }

double AdHocSquare::get_area()
{
	return side * side;
}

void AdHocSquare::set_side(double Nside)
{
	if (Nside == side) {
		std::cout << "The sides have not changed";
		return;
	}

	if (Nside >= 0) {

		side = Nside;
	}

}

class lazySquare
{
private:
	double side;
	double area;
	bool   changeSide;

public:
	lazySquare(double side);
	void set_side(double side);
	double get_area();
};

lazySquare::lazySquare(double side)
{
	this->side = side;
	this->area = side * side;
	this->changeSide = false;
}

void lazySquare::set_side(double Nside)
{

	if (Nside >= 0) {

		side = Nside;
		changeSide = true;
	}
}

double lazySquare::get_area()
{
	if (changeSide == true)
	{
		area = side * side;
		changeSide = false;
	}
	return area;
}

int main()
{
	AdHocSquare side(5);
	lazySquare side2(6);

	std::cout << "Square area is: " << side.get_area() << "\n";
	std::cout << "Square area is: " << side2.get_area() << "\n";

	return 0;
}