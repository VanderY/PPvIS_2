#pragma once
#include "GroundVehicle.h"
class Car :
   private GroundVehicle
{
    int _body_type;
    int _gearbox_type;
public: 
    Car(std::string manufacturer, std::string model, int max_speed,
        bool tyre_type, bool engine_type,
        int body_type, int gearbox_type) : Vehicle(manufacturer, model, max_speed), GroundVehicle(tyre_type, engine_type)
    {
        this->_body_type = body_type;
        this->_gearbox_type = gearbox_type;
    }
    void move()
    {
        std::cout << "Move " << _manufacturer << " - " << _model
            << " with " << _body_type << " body " << _engine_type << " engine and " 
            << _gearbox_type << " gearbox" << std::endl;
    }
    std::string getManufacturer()
    {
        return this->_manufacturer;
    }
    std::string getModel()
    {
        return this->_model;
    }
};


