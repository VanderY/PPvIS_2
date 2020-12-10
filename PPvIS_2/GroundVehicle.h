#pragma once
#include "Vehicle.h"

class GroundVehicle :
    protected virtual Vehicle
{
protected:
    bool _tyre_type;
    bool _engine_type;
    GroundVehicle(std::string manufacturer, std::string model, int max_speed, 
                  bool tyre_type, bool engine_type): Vehicle(manufacturer,model,max_speed)
    {
        this->_tyre_type = tyre_type;
        this->_engine_type = engine_type;
    }
    GroundVehicle(bool tyre_type, bool engine_type)
    {
        this->_tyre_type = tyre_type;
        this->_engine_type = engine_type;
    }
    void move()
    {
        std::cout << "Move " << _manufacturer << " - " << _model 
            << " on " << _tyre_type << " and " << _engine_type << " engine" <<std::endl;

    }
};

