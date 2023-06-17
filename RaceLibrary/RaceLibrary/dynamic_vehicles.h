#pragma once
#include <iostream>
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

namespace RaceLibraryDynamic
{
	class Vehicles {
	public:
		int speed = 0;
		int race_time = 0;
		std::string name = "Транспортное средство";
		RACELIBRARY_API Vehicles();
		RACELIBRARY_API Vehicles(int speed, std::string name);
		RACELIBRARY_API int Get_speed();
		RACELIBRARY_API float Get_race_time();
		RACELIBRARY_API std::string Get_name();
		RACELIBRARY_API void Set_race_time(float value_race_time);
	};
}