#pragma once
#include "Vehicle.h"
class WaterVehicle :
    protected virtual Vehicle
{
protected:
    int _immersion_level;
    WaterVehicle(std::string manufacturer, std::string model, int max_speed,
        int imersion_level) : Vehicle(manufacturer, model, max_speed)
    {
        this->_immersion_level = imersion_level;
    }
    WaterVehicle(int imersion_level)
    {
        this->_immersion_level = imersion_level;
    }
    void move()
    {
        std::cout << "Move " << _manufacturer << " - " << _model 
            <<" with " << _immersion_level << " immersion level" << std::endl;

    }
};

