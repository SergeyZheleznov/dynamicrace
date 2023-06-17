#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"
#include "dynamic_camel.h"
#include "dynamic_quick_camel.h"
#include "dynamic_eagle.h"

namespace RaceLibraryDynamic
{

	Eagle::Eagle()
	{
		name = "Îğ¸ë";
		speed = 8;
		k_lim = 6;
		k_lim_1 = 10;
		k_lim_2 = 5;
	};

	Eagle::Eagle(int speed, int k_lim, int k_lim_1, int k_lim_2) : Eagle()
	{
		this->speed = speed;
		this->k_lim = k_lim;
		this->k_lim_1 = k_lim_1;
		this->k_lim_2 = k_lim_2;
	};
}