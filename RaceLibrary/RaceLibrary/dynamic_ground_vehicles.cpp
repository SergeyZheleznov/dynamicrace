#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_ground_vehicles.h"

namespace RaceLibraryDynamic
{
	Ground_vehicles::Ground_vehicles() { name = "Наземное транспортное средство"; speed = 0; time_to_rest = 0;	rest_time = 0; rest_time1 = 0; rest_time2 = 0; }
	Ground_vehicles::Ground_vehicles(int speed, float time_to_rest, float rest_time1, float rest_time2)
	{
		this->speed = speed;
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
		this->rest_time1 = rest_time1;
		this->rest_time2 = rest_time2;
	}

	float Ground_vehicles::Get_time_to_rest() { return time_to_rest; };
	float Ground_vehicles::Get_rest_time() { return rest_time; };
	float Ground_vehicles::Get_rest_time1() { return rest_time1; };
	float Ground_vehicles::Get_rest_time2() { return rest_time2; };
}