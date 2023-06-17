#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>


namespace RaceLibraryDynamic
{
	class Centaur : public Ground_vehicles
	{
	public:
		RACELIBRARY_API Centaur();
		RACELIBRARY_API Centaur(float time_to_rest, float rest_time);
	};
}