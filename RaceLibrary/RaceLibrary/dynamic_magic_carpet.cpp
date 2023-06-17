#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"
#include "dynamic_camel.h"
#include "dynamic_quick_camel.h"
#include "dynamic_eagle.h"
#include "dynamic_magic_carpet.h"

namespace RaceLibraryDynamic
{
	Magic_carpet::Magic_carpet()
	{
		name = "Êîâ¸ğ-ñàìîë¸ò";
		speed = 10;
		k_lim = 3;
		k_lim_1 = 10;
		k_lim_2 = 5;
	};
	Magic_carpet::Magic_carpet(int speed, int k_lim, int k_lim_1, int k_lim_2) : Magic_carpet()
	{
		this->speed = speed;
		this->k_lim = k_lim;
		this->k_lim_1 = k_lim_1;
		this->k_lim_2 = k_lim_2;
	};
}