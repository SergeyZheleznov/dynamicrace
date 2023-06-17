#include "pch.h"
#include "dynamic_vehicles.h"
#include "dynamic_air_vehicles.h"

namespace RaceLibraryDynamic
{
	Air_vehicles::Air_vehicles() { name = "Воздушное транспортное средство"; speed = 0; k_lim = 0; k_lim_1 = 0; k_lim_2 = 0; }
	Air_vehicles::Air_vehicles(int speed, int k_lim, int k_k_lim, int k_lim_2)
	{
		this->speed = speed;
		this->k_lim = k_lim;
		this->k_lim_1 = k_lim_1;
		this->k_lim_2 = k_lim_2;
	}
	int Air_vehicles::Get_k_lim() { return k_lim; };
	int Air_vehicles::Get_k_lim_1() { return k_lim_1; };
	int Air_vehicles::Get_k_lim_2() { return k_lim_2; };
}