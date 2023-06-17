#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"

namespace RaceLibraryDynamic
{
	All_boots::All_boots() { name = "Ботинки-вездеходы"; speed = 6; time_to_rest = 60; rest_time = 10; rest_time1 = 5; }
	All_boots::All_boots(int time_to_rest, int rest_time, int time_to_rest1) : All_boots()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
		this->rest_time1 = rest_time1;
	};
}