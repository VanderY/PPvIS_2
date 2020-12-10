#include <iostream>
#include <string>
#include "Car.h"
#include "Amphibian.h"

namespace my
{
	bool compareCars(Car car1, Car car2)
	{
		if (car1.getManufacturer() == car2.getManufacturer() && car1.getModel() == car2.getModel())
		{
			return true;
		}
		return false;
	}
}

int main()
{
	Car fordFocus("Ford", "Focus", 150, 1, 1, 5, 2);
	Car fordFocus1("Ford", "Focus", 250, 1, 0, 3, 1);
	Car vwTuareg("Volkswagen", "Tuareg", 200, 1, 1, 5, 2);
	Amphibian amph("Ford", "GPA", 50, 0, 2, 100, "Wheeled");
	fordFocus.move();
	vwTuareg.move();
	//amph.move();
	std::cout << "Is this is the same cars? ";
	if (my::compareCars(fordFocus, vwTuareg))
	{
		std::cout << "Yes\n";
	}
	else
	{
		std::cout << "No\n";
	}
	std::cout << "\nOh wait.. I have one more car\n";
	fordFocus1.move();
	std::cout << "Do you think this is the same cars with firt ford? ";
	if (my::compareCars(fordFocus, fordFocus1))
	{
		std::cout << "Yes\n";
	}
	else
	{
		std::cout << "No\n";
	}
	return 0;
}
