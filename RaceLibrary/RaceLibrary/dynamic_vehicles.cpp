#include "pch.h"
#include "dynamic_vehicles.h"
#include <iostream>


namespace RaceLibraryDynamic
{
	Vehicles::Vehicles() { speed = 0; race_time = 0; name = "Транспортное средство"; }

	Vehicles::Vehicles(int speed, std::string name)
	{
		this->speed = speed;
		this->name = name;
	}

	int Vehicles::Get_speed() { return speed; };
	float Vehicles::Get_race_time() { return race_time; };
	std::string Vehicles::Get_name() { return name; };
	void Vehicles::Set_race_time(float value_race_time) { race_time = value_race_time; };
}