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
#include "dynamic_racer_result.h"

namespace RaceLibraryDynamic
{

	Racer_result::Racer_result()
	{
		racer_name;
		racer_speed;
		racer_time;
	};

	Racer_result::Racer_result(std::string racer_name, float racer_time, float racer_speed)
	{
		this->racer_speed = racer_speed;
		this->racer_name = racer_name;
		this->racer_time = racer_speed;
	};

	int Racer_result::Get_racer_speed()
	{
		return racer_speed;
	};

	int Racer_result::Get_racer_time()
	{
		return racer_time;
	};

	std::string Racer_result::Get_racer_name()
	{
		return racer_name;
	};

	void Racer_result::Set_racer_speed(float racer_speed)
	{
		this->racer_speed = racer_speed;
	};

	void Racer_result::Set_racer_time(float racer_time)
	{
		this->racer_time = racer_time;
	};

	void Racer_result::Set_racer_name(std::string racer_name)
	{
		this->racer_name = racer_name;
	};
}