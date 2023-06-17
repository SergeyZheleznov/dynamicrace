#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"
#include "dynamic_ground_vehicles.h"
#include "dynamic_all_boots.h"
#include "dynamic_camel.h"
#include "dynamic_quick_camel.h"
#include "dynamic_centaur.h"
#include "dynamic_eagle.h"
#include "dynamic_magic_carpet.h"
#include "dynamic_broom.h"


namespace RaceLibraryDynamic
{

	Broom::Broom()
	{
		name = "Метла";
		speed = 20;
		k_lim = 1;
	};
	Broom::Broom(int speed, int k_lim) : Broom()
	{
		this->speed = speed;
		this->k_lim = k_lim;
	};

}