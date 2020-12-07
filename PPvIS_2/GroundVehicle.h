#pragma once
#include "Vehicle.h"
#include <iostream>
class GroundVehicle :
    private Vehicle
{
    void move()
    {

        std::cout << "Driving on groung. it cost " <<std::endl;
    }
};

