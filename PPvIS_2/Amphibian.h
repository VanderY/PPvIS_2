#pragma once
#include "WaterVehicle.h"
#include "GroundVehicle.h"

class Amphibian
	:public WaterVehicle, public GroundVehicle
{
	std::string _type;
public:
	Amphibian(std::string manufacturer, std::string model, int max_speed,
		bool tyre_type, bool engine_type, int imersion_level,
		std::string type) : GroundVehicle(manufacturer, model, max_speed, tyre_type, engine_type), WaterVehicle(imersion_level)
	{
		this->_type = type;
	}
	void move()
	{
		std::cout << "Move " << _manufacturer << " - " << _model
			<< " with " << _engine_type << " engine and " << _immersion_level << std::endl;
	}
};

