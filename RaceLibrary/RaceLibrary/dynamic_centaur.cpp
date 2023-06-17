#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"
#include "dynamic_camel.h"
#include "dynamic_centaur.h"

namespace RaceLibraryDynamic
{

	Centaur::Centaur()
	{
		name = "Кентавр";
		speed = 15;
		time_to_rest = 8;
		rest_time = 2;
	};
	Centaur::Centaur(float time_to_rest, float rest_time) : Centaur()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	};

}