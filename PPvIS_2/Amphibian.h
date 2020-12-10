#pragma once
#include "WaterVehicle.h"
#include "GroundVehicle.h"

class Amphibian
	:private WaterVehicle, private GroundVehicle
{
	std::string _type;
public:
	Amphibian(std::string manufacturer, std::string model, int max_speed,
		bool tyre_type, bool engine_type, int imersion_level,
		std::string type) : Vehicle(manufacturer, model, max_speed), GroundVehicle(tyre_type, engine_type), WaterVehicle(imersion_level)
	{
		this->_type = type;
	}
	void move()
	{
		std::cout << "Move " << _manufacturer << " - " << _model
			<< " with " << _engine_type << " engine and " << _immersion_level << std::endl;
	}
};

