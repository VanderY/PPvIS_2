#pragma once
#include <string>
#include <iostream>
class Vehicle
{
protected:
	int _max_speed;
	std::string _manufacturer;
	std::string _model;
	Vehicle()
	{
		_max_speed = 0;
		_manufacturer = "None";
		_model = "None";
	}
	Vehicle(std::string manufacturer, std::string model, int max_speed)
	{
		this->_manufacturer = manufacturer;
		this->_model = model;
		this->_max_speed = max_speed;
	}
	virtual void move() = 0;

	//	std::string getManufacturer() { return _manufacturer; }
	//	std::string getModel() { return _model; }
	//	int getMaxSpeed() { return _max_speed; }
};

