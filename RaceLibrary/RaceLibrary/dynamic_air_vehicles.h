#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>

namespace RaceLibraryDynamic
{
	class Air_vehicles : public Vehicles
	{
	public:
		int k_lim;
		int k_lim_1;
		int k_lim_2;

		RACELIBRARY_API Air_vehicles();
		RACELIBRARY_API Air_vehicles(int speed, int k_lim, int k_k_lim, int k_lim_2);
		RACELIBRARY_API int Get_k_lim();
		RACELIBRARY_API int Get_k_lim_1();
		RACELIBRARY_API int Get_k_lim_2();
	};
}