#pragma once
class Vehicle
{
public:
	int price;
	int max_speed;
	int manufacturer;
	virtual void move() = 0;
};

