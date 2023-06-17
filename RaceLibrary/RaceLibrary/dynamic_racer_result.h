#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>


namespace RaceLibraryDynamic
{
	class Racer_result
	{
	public:
		std::string racer_name;
		float racer_speed;
		float racer_time;

		RACELIBRARY_API Racer_result();
		RACELIBRARY_API Racer_result(std::string racer_name, int racer_time, int racer_speed);
		RACELIBRARY_API float Get_racer_speed();
		RACELIBRARY_API float Get_racer_time();
		RACELIBRARY_API std::string Get_racer_name();
		RACELIBRARY_API void Set_racer_speed(float racer_speed);
		RACELIBRARY_API void Set_racer_time(float racer_time);
		RACELIBRARY_API void Set_racer_name(std::string racer_name);
	};
}