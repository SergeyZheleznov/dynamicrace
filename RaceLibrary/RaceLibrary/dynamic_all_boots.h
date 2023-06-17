#pragma once
#include <iostream>
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif

namespace RaceLibraryDynamic
{
	class All_boots : public Ground_vehicles
	{
	public:
		RACELIBRARY_API All_boots();
		RACELIBRARY_API All_boots(int time_to_rest, int rest_time, int time_to_rest1);
	};
}