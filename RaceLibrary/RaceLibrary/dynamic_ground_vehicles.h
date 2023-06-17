#pragma once
#include <iostream>
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif


namespace RaceLibraryDynamic
{
	class Ground_vehicles : public Vehicles
	{
	public:
		float time_to_rest;
		float rest_time;
		float rest_time1;
		float rest_time2;
	public:
		RACELIBRARY_API Ground_vehicles();
		RACELIBRARY_API Ground_vehicles(int speed, float time_to_rest, float rest_time1, float rest_time2);
		RACELIBRARY_API float Get_time_to_rest();
		RACELIBRARY_API float Get_rest_time();
		RACELIBRARY_API float Get_rest_time1();
		RACELIBRARY_API float Get_rest_time2();
	};
}